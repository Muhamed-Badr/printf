#include <stdio.h>
#include <stdlib.h>

void itos(int num, char *buffer, int *index, int buffer_size) {
	int temp = num;

	// Traverse and store digits from start to end, ignoring the negative sign
	while (temp != 0) {
		if (*index >= buffer_size - 1) {
			// Buffer is full, handle overflow here if needed
			break;
		}
		buffer[*index] = (temp % 10) + '0'; // Store the current digit
		temp /= 10; // Move to the next digit
		(*index)++; // Increment the buffer index
	}

	// Mark the end of the string
	if (*index < buffer_size) {
		buffer[*index] = '\0';
	} else {
		buffer[buffer_size - 1] = '\0'; // Ensure null termination
	}
}

int main() {
	char buffer[20]; // Buffer to store the string representation
	int index = 0;   // Start index

	int number = 12345;

	itos(number, buffer, &index, sizeof(buffer));

	printf("Hello, Heeks :)\n");

	if (index >= 0) {
		printf("String representation: %s\n", buffer);
	} else {
		printf("Buffer overflow or empty buffer\n");
	}

	return 0;
}

