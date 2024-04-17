## Project Description

    The aim of the project is to design a special multicycle computer processor that operates on 32-bit 
    instructions. This processor has 16 general-purpose registers, a program counter, and a stack 
    pointer, and uses two distinct memories for instructions and data. The focus was to enable the 
    processor to execute instructions, from simple arithmetic operations like addition and subtraction 
    to more complex tasks including decision-making processes.


## Design Specification

### Key features

       1. Each instruction in the set is 32 bits in length. 
       2. The design includes 16 32-bit general-purpose registers, labeled from R0 to R15. 
       3. Program Counter (PC) is a 32-bit special-purpose register. 
       4. stack pointer (SP) is 32-bit special purpose register. 
       5. four distinct instruction types – R-type, I-type, J-type, and S-type. 
       6. The processor is designed with two separate physical memory units: one for storing 
          instructions and the other for data. 
       7. Arithmetic Logic Unit is also used to decide the outcomes of certain instructions, like 
       whether to take a branch or not.

### Instruction Formats
