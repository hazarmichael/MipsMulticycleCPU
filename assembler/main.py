import os
import sys
import assmbler

if __name__ == "__main__":
    # Prints the script name

    if len(sys.argv) != 3:
        print("Usage : python main.py <input_file> <output_file>")
        sys.exit(1)

    input_name = sys.argv[1]


    input_name = sys.argv[1]
    if not os.path.exists(input_name):
        print("Input file does not exist")
        sys.exit(1)

    file = open(input_name, "r")
    code = file.read()
    output_name = sys.argv[2]
    assmbler = assmbler.Assembler()
    output = assmbler.assemble(code)

    with open(output_name, "w") as f:
        f.write('\n'.join(output))

    print("Output file created successfully")

