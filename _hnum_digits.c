#include "main.h"

/**
 * _hnum_digits - Like `_num_digits()` function but for `short int`.
 * @num: The number that needs to calculate its number of digits.
 * @base: The base of passed number (e.g. `10` for decimal,
 *         `2` for binary, `16` for hexadecimal, `8` for octal, etc).
 * @is_signed: A flag that tells the function how to process the passed number:
 *             - If `1`, the function treats `num` as signed.
 *             - If `0`, the function treats `num` as unsigned.
 *
 * Return: The length of passed number (`num_len` >= 1).
 */
int _hnum_digits(void *num, int base, char is_signed)
{
	int num_len = 0;
	short _num = *(short *)num;
	unsigned short unsigned_num = _num;

	/*
	 * Handle signed negative number by converting it to a positive unsigned
	 *  equivalent (flip the sign).
	 */
	if (is_signed == 1 && _num < 0)
		unsigned_num *= (-1);

	do {
		num_len++;
		unsigned_num /= base;
	} while (unsigned_num != 0);

	return (num_len);
}

