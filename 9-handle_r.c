#include "main.h"

int r_handle_str(const char *rev_str, int str_len, char *buf, int *buf_index);
char *_r_strncpy(char *dest, const char *src, int n);

/**
 * handle_r - Handle the type conversion `r` (reversed string).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_r(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, str_len;
	char padding_ch = ' ', *rev_str, pad_start = 0, pad_end = 0;

	rev_str = va_arg(ap, char *);
	if (rev_str == NULL)
		rev_str = (fs->precision.is_set) ? ""  : "(null)";
	str_len = _strlen(rev_str);
	rev_str += (str_len - 1); /* point to the end of the string (skip '\0') */
	/*
	 * Limit `str_len` to the precision value if it is set and smaller
	 *  than `str_len`. The precision value represents the maximum length
	 *  of the string to print.
	 */
	if (fs->precision.is_set && fs->precision.value < str_len)
		str_len = fs->precision.value;
	if ((fs->width - str_len) > 0) /* Check padding position */
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else
			pad_start = 1;
	}
	/*
	 * Padding by `padding_ch` before string,
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - str_len));
	/* Handle string */
	total_bytes_written += r_handle_str(rev_str, str_len, buf, buf_index);
	/* Padding by `padding_ch` after string, if The `flag_minus` turn on. */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - str_len));

	return (total_bytes_written);
}

/**
 * r_handle_str - Handle reversed string (special case from `handle_str`).
 * @rev_str: A pointer to the passed reversed string that needs to be handled.
 * @str_len: The length of the passed string `str`.
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int r_handle_str(const char *rev_str, int str_len, char *buf, int *buf_index)
{
	int total_bytes_written = 0, remaining_space = 0;

	if (rev_str != NULL && str_len != 0)
	{
		/*
		 * Check if there are enough spaces in `buf` to store the string
		 *  that is less than `BUF_SIZE`(1024).
		 */
		if ((*buf_index + 1) + str_len > BUF_SIZE)
		{/*
		  * Calculate the buffer's remaining space, copy only what can fit,
		  * and update `str_len` to reflect what wasn't stored from `rev_str`.
		  */
			remaining_space = (BUF_SIZE - (*buf_index + 1));
			_r_strncpy((buf + (*buf_index + 1)), rev_str, remaining_space);
			str_len -= remaining_space;

			total_bytes_written += write(1, buf, BUF_SIZE);
			*buf_index = -1;
		}
		/* Copy/Store the remaining/full of the string into the `buf`. */
		_r_strncpy((buf + (*buf_index + 1)), (rev_str - remaining_space),
				str_len);
		*buf_index += str_len;
	}
	return (total_bytes_written);
}

/**
 * _r_strncpy - copies a strings in reversed way(special case from `_strncpy`).
 * @dest: 1nd pointer parameter
 * @src: 2st pointer parameter
 * @n: The number of copied bytes from 'src'
 *
 * Return: pointer to new 'dest'
 */
char *_r_strncpy(char *dest, const char *src, int n)
{
	int i;

	/* copies n bytes from 'src' (n <= 'src' bytes) */
	for (i = 0; i < n; i++)
		dest[i] = *(src - i);

	return (dest);
}

