#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile each .c file into individual object files
for c_file in $c_files; do
  object_file="${c_file%.c}.o"
  gcc -c "$c_file" -o "$object_file"
done

# Create the static library "liball.a" from all the object files
ar rcs liball.a *.o

# Clean up - remove the individual object files
rm -f *.o

echo "Static library liball.a created successfully."
