#include "main.h"

/**
 * _unum_digits - Like `_num_digits()` function but for `unsigned int`.
 * @num: The number that needs to calculate its number of digits.
 * @base: The base of passed number (e.g. `10` for decimal,
 *         `2` for binary, `16` for hexadecimal, `8` for octal, etc).
 *
 * Return: The length of passed number (`num_len` >= 1).
 */
int _unum_digits(unsigned int num, int base)
{
	int num_len = 0;

	do {
		num_len++;
		num /= base;
	} while (num != 0);

	return (num_len);
}

