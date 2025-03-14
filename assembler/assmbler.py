import re
from collections import defaultdict
import os
import json


class SymbolTable:
    def __init__(self):
        self.labels = {}

    def add_label(self, name, address):
        self.labels[name] = address

    def get_address(self, name):
        return self.labels.get(name, None)


class Assembler:
    # Path to your JSON file
    json_file_path = "asssembler/instructions.json"
    # Open and read the JSON file
    with open(json_file_path, "r") as file:
        INSTRUCTIONS = json.load(file)

    def __init__(self):
        self.symbol_table = SymbolTable()
        self.current_address = 0

    def parse_line(self, line):
        line = re.sub(r'#.*$', '', line).strip()
        if not line:
            return None, None
        if ':' in line:
            parts = line.split(':', 1)
            label = parts[0].strip()
            instr = parts[1].strip()
            return label, instr
        return None, line

    def first_pass(self, lines):
        address = 0
        for line in lines:
            label, instr = self.parse_line(line)
            if label:
                self.symbol_table.add_label(label, address)
            if instr:
                address += 1

    def second_pass(self, lines):
        output = []
        address = 0
        for line in lines:
            label, instr = self.parse_line(line)
            if not instr:
                continue
            parts = re.split(r'[,\s]+', instr)
            mnemonic = parts[0].upper()
            operands = parts[1:] if len(parts) > 1 else []
            if mnemonic not in self.INSTRUCTIONS:
                raise ValueError(f"Unknown instruction: {mnemonic}")
            info = self.INSTRUCTIONS[mnemonic]
            if info['type'] == 'R':
                encoded = self.encode_r_type(mnemonic, operands)
            elif info['type'] == 'I':
                encoded = self.encode_i_type(mnemonic, operands, address)
            elif info['type'] == 'J':
                encoded = self.encode_j_type(mnemonic, operands, address)
            elif info['type'] == 'S':
                encoded = self.encode_s_type(mnemonic, operands)
            else:
                raise ValueError(f"Unsupported type: {info['type']}")
            output.append(encoded)
            address += 1
        return output

    def encode_r_type(self, mnemonic, operands):
        if len(operands) != 3:
            raise ValueError(f"R-type instruction {mnemonic} requires 3 operands")
        opcode = self.INSTRUCTIONS[mnemonic]['opcode']
        rd = self.parse_register(operands[0])
        rs1 = self.parse_register(operands[1])
        rs2 = self.parse_register(operands[2])
        return f"{opcode}{rd:04b}{rs1:04b}{rs2:04b}{0:014b}"

    def encode_i_type(self, mnemonic, operands, current_address):
        info = self.INSTRUCTIONS[mnemonic]
        opcode = info['opcode']
        signed_imm = info.get('signed_imm', True)
        mode = info.get('mode', '00')
        if mnemonic in ['BGT', 'BLT', 'BEQ', 'BNE']:
            if len(operands) != 3:
                raise ValueError(f"Branch instruction {mnemonic} requires 3 operands")
            rd = self.parse_register(operands[0])
            rs1 = self.parse_register(operands[1])
            label = operands[2]
            target_address = self.symbol_table.get_address(label)
            if target_address is None:
                raise ValueError(f"Undefined label: {label}")
            imm = target_address - current_address
            if not (-32768 <= imm <= 32767):
                raise ValueError(f"Branch offset out of range: {imm}")
            imm_bin = self.to_twos_complement(imm, 16)
        else:
            if mnemonic in ['LW', 'LW.POT', 'SW']:
                # Format: Rd, imm(Rs1)
                match = re.match(r'(\d+)\(([Rr])(\d+)\)', operands[1])
                if not match:
                    raise ValueError(f"Invalid memory operand: {operands[1]}")
   
                imm = int(match.group(1))
                r = match.group(2).upper()
                rs1 = self.parse_register(f"{r}{match.group(3)}")
                rd = self.parse_register(operands[0])
            else:
                if len(operands) != 3:
                    raise ValueError(f"I-type instruction {mnemonic} requires 3 operands")
                rd = self.parse_register(operands[0])
                rs1 = self.parse_register(operands[1])
                imm = self.parse_immediate(operands[2], signed_imm)
            imm_bin = self.to_twos_complement(imm, 16) if signed_imm else format(imm & 0xFFFF, '016b')
        rd_bin = format(rd, '04b')
        rs1_bin = format(rs1, '04b')
        return f"{opcode}{rd_bin}{rs1_bin}{imm_bin}{mode}"

    def encode_j_type(self, mnemonic, operands, current_address):
        opcode = self.INSTRUCTIONS[mnemonic]['opcode']
        if mnemonic == 'RET':
            return f"{opcode}{0:026b}"
        elif mnemonic in ['JMP', 'CALL']:
            label = operands[0]
            target_address = self.symbol_table.get_address(label)
            if target_address is None:
                raise ValueError(f"Undefined label: {label}")
            current_upper = (current_address >> 26) & 0x3F
            target_upper = (target_address >> 26) & 0x3F
            if current_upper != target_upper:
                raise ValueError(f"Jump target {label} out of range")
            offset = target_address & 0x03FFFFFF
            return f"{opcode}{offset:026b}"
        else:
            raise ValueError(f"Unsupported J-type instruction: {mnemonic}")

    def encode_s_type(self, mnemonic, operands):
        opcode = self.INSTRUCTIONS[mnemonic]['opcode']
        rd = self.parse_register(operands[0]) if operands else 0
        return f"{opcode}{rd:04b}{0:022b}"

    def parse_register(self, reg):

        reg = reg.upper()

        if not reg.startswith('R'):
            raise ValueError(f"Invalid register: {reg}")
        num = int(reg[1:])
        if num < 0 or num > 15:
            raise ValueError(f"Register {reg} out of range")
        return num

    def parse_immediate(self, imm_str, signed):
        try:
            return int(imm_str, 0)
        except ValueError:
            raise ValueError(f"Invalid immediate: {imm_str}")

    def to_twos_complement(self, value, bits):
        mask = (1 << bits) - 1
        return format(value & mask, f'0{bits}b')

    def assemble(self, source):
        lines = source.split('\n')
        self.first_pass(lines)
        return self.second_pass(lines)


# Example Usage
if __name__ == "__main__":
    assembler = Assembler()
    source_code = """
    start:
        ADDI R1, R0, 5
        ADDI R2, R0, 10
    loop:
        ADD R3, R1, R2
        bgt R3, R0, loop
        JMP exit
    exit:
        RET
    """
    binary = assembler.assemble(source_code)
    for instr in binary:
        print(instr)