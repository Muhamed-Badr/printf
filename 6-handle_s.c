#include "main.h"

/**
 * handle_s - Handle the type conversion `s` (string).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_s(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, str_len;
	char padding_ch = ' ', *str, pad_start = 0, pad_end = 0;

	str = va_arg(ap, char *);
	/*This condition is applied in Linux, in Win (`str = "(null)";` always).*/
	if (str == NULL)
		str = (fs->precision.is_set) ? ""  : "(null)";
	str_len = _strlen(str);
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
	total_bytes_written += handle_str(str, str_len, buf, buf_index);
	/* Padding by `padding_ch` after string, if The `flag_minus` turn on. */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - str_len));

	return (total_bytes_written);
}
