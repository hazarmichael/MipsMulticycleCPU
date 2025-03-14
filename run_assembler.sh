#!/bin/bash

# Directory for the virtual environment
VENV_DIR="assembler/venv"

# Check if the virtual environment exists
if [ ! -d "$VENV_DIR" ]; then
  echo "Creating virtual environment..."
  python3 -m venv "$VENV_DIR"
  echo "Virtual environment created."
fi

# Activate the virtual environment
source "$VENV_DIR/bin/activate"

# Check if dependencies are installed
if ! pip freeze | grep -q -r -f assembler/requirements.txt; then
  echo "Installing dependencies..."
  pip install -r assembler/requirements.txt
else
  echo "Dependencies already installed."
fi

# Run the assembler
python assembler/main.py "$@"
if [ $? -ne 0 ]; then
  echo "Assembler failed with runtime error"
  exit 1
fi
# Deactivate the virtual environment
deactivate
