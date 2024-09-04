#!/bin/bash

# Check if a test file is provided as an argument
if [ -z "$1" ]; then
	echo "Usage: $0 <test_file>"
	exit 1
fi

# Compile the provided test file along with all .c files
#gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c "$1"
gcc -Wno-overflow -Wno-long-long -Wno-format *.c "$1"

# Inform the user the compilation is complete
if [ $? -eq 0 ]; then
	echo "Compilation successful"
else
	echo "Compilation failed"
fi

