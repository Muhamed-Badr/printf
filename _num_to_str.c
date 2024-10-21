#include "main.h"

/**
 * _num_to_str - Convert a number `num` to a string based on a given `base`.
 * @buf: A pointer to the buffer where the converted number should be stored.
 * @buf_size: The buffer size.
 * @num: The decimal number that needs to be converted.
 * @num_len: The length of the number (in digits) that needs to be converted.
 * @base: The base to which the number will be converted,
 *         such as:
 *                  - `10` for decimal.
 *                  - `2` for binary.
 *                  - `16` for hexadecimal.
 *                  - `8` for octal.
 *                  - ...etc.
 *
 * Return: On success, A pointer to the buffer `buf`.
 *         ON failure, NULL('\0').
 */
char *_num_to_str(char *buf, int buf_size, int num, int num_len, int base)
{
	int i, j;
	unsigned int unsigned_num = num;
	char tmp;

	/* Check the buffer, and ensure that its size will fit the number */
	if (buf == NULL || buf_size < num_len)
		return (NULL);

	/*
	 * Handle negative number by converting it to a positive unsigned
	 *  equivalent (flip the sign).
	 */
	if (num < 0)
		unsigned_num *= (-1);

	/* Convert each digit to its corresponding character in the given base. */
	for (i = 0; i < num_len; i++)
	{
		buf[i] = (unsigned_num % base) + '0';
		unsigned_num /= base;
	}

	/*
	 * Reverse the buffer (Swap the characters) to get the correct
	 *  order (from most significant digit to least).
	 */
	for (i = 0, j = (num_len - 1); i < j; i++, j--)
	{
		tmp = buf[i];
		buf[i] = buf[j];
		buf[j] = tmp;
	}

	return (buf);
}

