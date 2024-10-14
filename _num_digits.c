#include "main.h"

/**
 * _num_digits - Calculates the number of digits of the passed number.
 * @num: The number that needs to calculate its number of digits.
 * @base: The base of passed number (e.g. `10` for decimal,
 *         `2` for binary, `16` for hexadecimal, `8` for octal, etc).
 *
 * Return: The length of passed number (`num_len` >= 1).
 */
int _num_digits(int num, int base)
{
	int num_len = 0;

	do {
		num_len++;
		num /= base;
	} while (num != 0);

	return (num_len);
}

