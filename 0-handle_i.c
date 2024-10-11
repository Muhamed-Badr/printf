#include "main.h"
int int_to_str(char *buf, int *buf_index, int num, int num_len);

/**
 * handle_i - Handle the type conversion `i` or `d` (integer values/numbers).
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_i(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, num, num_len;
	char padding_ch, sign_required = 0;
	char pad_start = 0, pad_mid = 0, pad_end = 0;

	/*
	 * Collect some information:
	 *     1. The number `num`.
	 *     2. The number length `num_len`.
	 *     3. A flag `sign_required`: check if we need to reserve a place for
	 *         the number's sign OR not (its value will be only `1` or `0`).
	 *     4. The padding character `padding_ch`.
	 *     5. The padding position:
	 *            -> Padding before the number and its sign `pad_start`.
	 *            -> Padding between the number and its sign `pad_mid`.
	 *            -> Padding after the number and its sign `pad_end`.
	 */
	num = va_arg(ap, int);
	num_len = _num_digits(num);
	sign_required = (num < 0 || fs->flags.flag_plus || fs->flags.flag_space);
	padding_ch = ((fs->flags.flag_zero && !fs->flags.flag_minus) ? '0' : ' ');
	if ((fs->width - (num_len + sign_required)) > 0)
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else if (padding_ch == '0')
			pad_mid = 1;
		else
			pad_start = 1;
	}

	/*
	 * Padding by `padding_ch` before number(including its sign),
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	/* Handle sign or space for the number */
	if (sign_required)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		if (num < 0)
			buf[*buf_index + 1] = '-';
		else if (fs->flags.flag_plus)
			buf[*buf_index + 1] = '+';
		else
			buf[*buf_index + 1] = ' ';
		(*buf_index)++;
	}

	/*
	 * Padding by `padding_ch` between the number and its sign,
	 *  if The `flag_minus` turn off.
	 */
	if (pad_mid)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	/* Convert the integer to string and add it to the buffer */
	total_bytes_written += int_to_str(buf, buf_index, num, num_len);

	/*
	 * Padding by `padding_ch` after number(including its sign),
	 *  if The `flag_minus` turn on
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	return (total_bytes_written);
}

/**
 * int_to_str - Convert integer values to string.
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @num: The integer value that needs to be converted.
 * @num_len: The length of integer value `num`.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int int_to_str(char *buf, int *buf_index, int num, int num_len)
{
	int total_bytes_written = 0, mul_of_10 = 1, i;
	unsigned int unsigned_num = num;

	if (num < 0)
		unsigned_num *= (-1);

	for (i = 1; i < num_len; i++)
		mul_of_10 *= 10;

	while (mul_of_10)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = (unsigned_num / mul_of_10) + '0';
		unsigned_num %= mul_of_10;
		mul_of_10 /= 10;
		(*buf_index)++;
	}

	return (total_bytes_written);
}

