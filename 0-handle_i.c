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
	char padding_ch = ((fs->flags.flag_zero) ? '0' : ' '), is_padded = 0;

	num = va_arg(ap, int);
	num_len = _num_digits(num);

	if (!(fs->flags.flag_minus) && (fs->width - num_len) > 0)
	{
		while ((fs->width - num_len) > 0)
		{
			total_bytes_written += _check_buf(buf, buf_index);
			buf[*buf_index + 1] = padding_ch;
			(*buf_index)++;
			fs->width--;
		}
		is_padded = 1;
	}

	if (num < 0 || fs->flags.flag_plus || fs->flags.flag_space)
	{
		if (is_padded)
			(*buf_index)--;
		total_bytes_written += _check_buf(buf, buf_index);
		if (num < 0)
			buf[*buf_index + 1] = '-';
		else if (fs->flags.flag_plus)
			buf[*buf_index + 1] = '+';
		else
			buf[*buf_index + 1] = ' ';
		(*buf_index)++;
		fs->width--;
	}

	total_bytes_written += int_to_str(buf, buf_index, num, num_len);
	fs->width -= num_len;

	while (fs->width > 0)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = padding_ch;
		(*buf_index)++;
		fs->width--;
	}

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

