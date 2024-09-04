#include "main.h"
int check_buf(char *buf, int *buf_index);
int num_digits(int num, int *debug_num);
int int_to_str(char *buf, int *buf_index, int num, int num_len,
		int *debug_num);

/**
 * handle_i - Handle the type conversion `i` or `d` (integer values/numbers).
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *''
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_i(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num)
{
	int total_bytes_written = 0, num, num_len;
	char ch = ((fs->flags.flag_zero) ? '0' : ' ');
	/*+D-*/char debug_flag = 1;

	/*+D*/
	printf("\t\t\t[+%d] in handle_%c()\n", (*debug_num)++,
			fs->type_conversion);
	/*-D*/

	num = va_arg(ap, int);
	num_len = num_digits(num, debug_num);
	/*+D-*/printf("\t\t\t\t[-%d] out num_digits()\n", --(*debug_num));

	if (num < 0 || fs->flags.flag_plus || fs->flags.flag_space)
	{
		total_bytes_written += check_buf(buf, buf_index);
		if (num < 0)
			buf[*buf_index + 1] = '-';
		else if (fs->flags.flag_plus)
			buf[*buf_index + 1] = '+';
		else
			buf[*buf_index + 1] = ' ';
		(*buf_index)++;
		fs->width--;
	}

	total_bytes_written += int_to_str(buf, buf_index, num, num_len, debug_num);
	fs->width -= num_len;
	/*+D-*/printf("\t\t\t\t[-%d] out int_to_str()\n", --(*debug_num));

	while (fs->width > 0)
	{
		/*+D*/
		if (debug_flag)
		{
			printf("\t\t\t\t[+%d] in 1st while(fs->width)\n", (*debug_num)++);
			debug_flag = 0;
		}
		/*-D*/
		total_bytes_written += check_buf(buf, buf_index);
		buf[*buf_index + 1] = ch;
		(*buf_index)++;
		fs->width--;
	}
	/*+D*/
	if (debug_flag == 0)
		printf("\t\t\t\t[-%d] out 1st while(fs->width)\n", --(*debug_num));
	/*-D*/

	return (total_bytes_written);
}

/**
 * check_buf - Check buffer.
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int check_buf(char *buf, int *buf_index)
{
	int total_bytes_written = 0;

	if ((*buf_index + 1) + 1 > BUF_SIZE)
	{
		total_bytes_written = write(1, buf, (*buf_index + 1));
		*buf_index = -1;
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
int int_to_str(char *buf, int *buf_index, int num, int num_len, int *debug_num)
{
	int total_bytes_written = 0, mul_of_10 = 1, i, debug_flag = 1;

	/*+D-*/printf("\t\t\t\t[+%d] in int_to_str()\n", (*debug_num)++);

	if (num < 0)
		num *= (-1);

	for (i = 1; i < num_len; i++)
	{
		/*+D*/
		if (debug_flag)
		{
			printf("\t\t\t\t\t[+%d] in 1st for\n", (*debug_num)++);
			debug_flag = 0;
		}
		/*-D*/
		mul_of_10 *= 10;
	}

	/*+D*/
	if (debug_flag == 0)
		printf("\t\t\t\t\t[-%d] out 1st for\n", --(*debug_num));
	debug_flag = 1;
	/*-D*/

	while (mul_of_10)
	{
		/*+D*/
		if (debug_flag)
		{
			printf("\t\t\t\t\t[+%d] in 1st while(mul_of_10)\n",
					(*debug_num)++);
			debug_flag = 0;
		}
		/*-D*/
		total_bytes_written += check_buf(buf, buf_index);
		buf[*buf_index + 1] = (num / mul_of_10) + '0';
		num %= mul_of_10;
		mul_of_10 /= 10;
		(*buf_index)++;
	}
	/*+D*/
	if (debug_flag == 0)
		printf("\t\t\t\t\t[-%d] out 1st while\n", --(*debug_num));
	/*-D*/

	return (total_bytes_written);
}

/**
 * num_digits - Calculates the number of digits of the passed number.
 * @num: The integer value that needs to calculate its number of digits.
 *
 * Return: The length of passed integer number (`num_len` >= 1).
 */
int num_digits(int num, int *debug_num)
{
	int num_len = 0, debug_flag = 1;

	/*+D-*/printf("\t\t\t\t[+%d] in num_digits()\n", (*debug_num)++);

	if (num == 0)
		return (1);

	while (num)
	{
		/*+D*/
		if (debug_flag)
		{
			printf("\t\t\t\t\t[+%d] in 1st while(num)\n", (*debug_num)++);
			debug_flag = 0;
		}
		/*-D*/
		num_len++;
		num /= 10;
	}
	/*+D*/
	if (debug_flag == 0)
		printf("\t\t\t\t\t[-%d] out 1st while(num)\n", --*(debug_num));
	/*-D*/

	return (num_len);
}

