module mainController (

    output reg MemWriteSel, MemReg, RegSrc,
    RegWrite, RegWrite2, MemRead,
    IRwrite, PCwriteUncond,
    StackWrite, sign_ext, MemWrite,
    StackSelect,


    output reg [1:0] ALUsrcA, ALUsrcB,
    PCsrc, ALUctrl, StackALU,

    output reg [3:0] state,

    input clk, reset,
    input [5:0] opcode,
    input [1:0] mode
  );
  reg jmp;
  reg PUSH_Branch;
  wire logical;

  parameter InstructionFetch = 0,
            InstructionDecode = 1,
            AddressComputation = 2,
            LoadAccess = 3,
            StoreAccess = 4,
            ALUcomputationR = 5,
            ResultStore = 6,
            BranchCompletion = 7,
            IncrementReg = 8,
            ALUcomputationI = 9,
            PushAccess = 10,
            PopAccess = 11,
            ResultStoreMem = 12,
            Call = 13,
            Return = 14;

  parameter AND = 6'b0,
            ADD = 6'b01,
            SUB = 6'b10,
            ANDI= 6'b11,
            ADDI= 6'b100,
            LW = 6'b000101,
            LW_POI = 6'b000110,
            SW = 6'b000111,
            BGT = 6'b1000,
            BLT = 6'b1001,
            BEQ = 6'b1010,
            BNE = 6'b1011,
            JMP = 6'b1100,
            CALL = 6'b1101,
            RET = 6'b1110,
            PUSH = 6'b1111,
            POP = 6'b10000,
            Inc = 2'b01,
            NoInc = 2'b00;




  always @*
  begin

    case (opcode)
      JMP :
      begin

        jmp = 1;
        PUSH_Branch = 0;
      end

      BGT, BLT,
      BEQ, BNE,
      PUSH, SW :
      begin
        PUSH_Branch = 1;
        jmp = 0;
      end

      default :
      begin
        PUSH_Branch = 0;
        jmp = 0;
      end

    endcase
  end

  assign logical = (opcode == ANDI);



  always @(posedge clk or negedge reset)
  begin

    if (!reset)
      state <= InstructionFetch;

    else
    begin

      case (state)

        InstructionFetch :
          state <= InstructionDecode;

        InstructionDecode :
        begin

          case (opcode)

            AND, ADD, SUB:
              state <= ALUcomputationR;   //R-type
            LW, SW, LW_POI :
              state <= AddressComputation; //memory access

            BEQ, BNE, BGT, BLT :
              state <= BranchCompletion; //Branch instruction

            JMP :
              state <= InstructionFetch; //jmp instruction
            ANDI, ADDI:
              state <= ALUcomputationI;  // I-type
            POP :
              state <= PopAccess;	  //POP
            PUSH :
              state <= PushAccess;
            CALL :
              state <= Call;
            RET :
              state <= Return;

            default :
              state <= InstructionFetch;
          endcase
        end


        AddressComputation :
        begin

          case (opcode)
            LW :
              state <= LoadAccess;
            SW :
              state <= StoreAccess;
            default :
              state <= LoadAccess;
          endcase
        end

        LoadAccess :
        begin

          case (mode)
            NoInc :
              state <= ResultStoreMem;
            Inc :
              state <= IncrementReg;
            default :
              state <= ResultStoreMem;
          endcase
        end

        StoreAccess, ResultStoreMem,
        ResultStore, IncrementReg, PushAccess,
        BranchCompletion, Return,
        Call, PopAccess :
          state <= InstructionFetch;

        ALUcomputationI, ALUcomputationR :
          state <= ResultStore;

        default :
          state <= InstructionFetch;

      endcase
    end

  end

  always @(*)
  begin

    MemWriteSel = 0;
    MemReg = 0;
    RegSrc = 0;
    RegWrite = 0;
    RegWrite2 = 0;
    MemRead = 0;
    MemWrite = 0;
    IRwrite = 0;
    PCwriteUncond = 0;
    StackALU = 0;
    StackWrite = 0;
    sign_ext = 0;
    PCsrc = 0;
    ALUctrl = 0;
    ALUsrcA = 0;
    ALUsrcB = 0;
    StackSelect = 0;

    case (state)

      InstructionFetch :
      begin

        IRwrite = 1'b1;
        PCsrc = 2'b01;
        PCwriteUncond = 1'b1;
        ALUsrcA=2'b00;
        ALUsrcB=2'b10;
        ALUctrl=2'b01;
      end

      InstructionDecode :
      begin

        sign_ext = 1;
        ALUsrcB = 2'b01;
        ALUsrcA =   2'b00;
        ALUctrl = 2'b01;
        RegSrc = PUSH_Branch;
        PCsrc = 2'b00;
        PCwriteUncond = jmp;
        StackALU = 2'b01;
        MemRead = 1;
      end

      AddressComputation :
      begin

        sign_ext = 1;
        ALUsrcB = 2'b01;
        ALUsrcA = 2'b01;
        ALUctrl = 2'b01;
        RegSrc = 1'b1;
      end

      LoadAccess :
        MemRead = 1'b1;
      StoreAccess :
        MemWrite = 1'b1;

      ALUcomputationR :
      begin

        ALUsrcA = 2'b01;
        ALUsrcB = 2'b00;
        ALUctrl = 2'b00;
      end

      ResultStore :
        RegWrite = 1'b1;

      ResultStoreMem :
      begin

        MemReg = 1'b1;
        RegWrite = 1'b1;
      end

      BranchCompletion :
      begin

        PCsrc = 2'b11;
        ALUsrcA = 2'b01;
        ALUsrcB = 2'b00;
        ALUctrl= 2'b11;
      end

      IncrementReg :
      begin

        RegWrite = 1'b1;
        RegWrite2 = 1'b1;
        MemReg = 1'b1;
      end

      ALUcomputationI :
      begin

        ALUsrcA = 2'b01;
        ALUsrcB = 2'b01;
        ALUctrl = 2'b00;
        sign_ext = !logical;
      end

      PushAccess :
      begin

        MemWrite = 1;
        ALUsrcA = 2'b10;
        ALUsrcB = 2'b10;
        StackALU = 2'b10;
        StackWrite = 1;
        ALUctrl = 2'b01;
      end

      PopAccess :
      begin

        StackWrite = 1;
        RegWrite = 1;
        MemReg = 1;
        StackSelect = 1;
      end

      Call :
      begin

        MemWriteSel = 1;
        StackWrite = 1;
        ALUsrcA = 2'b10;
        ALUsrcB = 2'b10;
        ALUctrl = 2'b01;
        StackALU = 2'b10;
        MemWrite = 1;
        PCwriteUncond = 1;
      end

      Return :
      begin

        PCsrc = 2'b10;
        StackWrite = 1;
        StackALU = 2'b01;
        PCwriteUncond = 1;
        StackSelect = 1;
        MemRead = 1;

      end

    endcase

  end

endmodule
