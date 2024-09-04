#include "main.h"

/**
 * _num_digits - Calculates the number of digits of the passed number.
 * @num: The integer value that needs to calculate its number of digits.
 *
 * Return: The length of passed integer number (`num_len` >= 1).
 */
int _num_digits(int num)
{
	int num_len = 0;

	if (num == 0)
		return (1);

	while (num)
	{
		num_len++;
		num /= 10;
	}

	return (num_len);
}

