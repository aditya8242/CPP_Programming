#!/bin/bash

# Usage
: ./create_assignment.sh 13

if [ -z "$1" ]; then
  echo "Usage: $0 <assignment_number>"
  exit 1
fi

ASSIGNMENT_NUM=$1
ASSIGNMENT_DIR="Assignment_$ASSIGNMENT_NUM"

# Create the directory
mkdir -p "$ASSIGNMENT_DIR"

# Create five program files
for i in {1..5}; do
  FILE="$ASSIGNMENT_DIR/program${ASSIGNMENT_NUM}_$i.cpp"
  if [ ! -f "$FILE" ]; then
    touch "$FILE"
  fi
done

echo "Created $ASSIGNMENT_DIR with 5 program files."
