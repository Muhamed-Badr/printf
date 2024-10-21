#include "main.h"

/**
 * _unum_to_str - Like `_num_to_str()` function but for `unsigned int`.
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
char *_unum_to_str(char *buf, int buf_size, unsigned int num, int num_len,
		int base)
{
	int i, j;
	char tmp, base_chars[] = "0123456789abcdef";

	/* Check the buffer, and ensure that its size will fit the number */
	if (buf == NULL || buf_size < num_len)
		return (NULL);

	/* Convert each digit to its corresponding character in the given base. */
	for (i = 0; i < num_len; i++)
	{
		buf[i] = base_chars[(num % base)];
		num /= base;
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

