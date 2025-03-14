#!/bin/bash
set -e

input_file="$1"
output_file="$2"

# Run the Python script and check for errors
python3 assembler/main.py "$input_file" "$output_file"
if [ $? -ne 0 ]; then
  echo "Python script failed with runtime error"
  exit 1
fi

# Continue with the rest of the shell script