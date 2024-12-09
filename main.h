#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define BUF_SIZE 1024

/**
 * struct flags - A structure to hold flag settings for format specifiers.
 * @flag_space: Represents the ' ' (space) flag.
 *               If set, a space is placed before positive numbers
 *               in the output.
 * @flag_plus: Represents the '+' flag.
 *              If set, a plus sign is placed before positive numbers
 *              in the output.
 * @flag_minus: Represents the '-' flag.
 *               If set, the output is left-justified within the specified
 *               width.
 * @flag_zero: Represents the '0' flag.
 *             If set, numbers are padded with zeros instead of spaces.
 * @flag_hash: Represents the '#' flag.
 *              If set, an alternative form is used
 *              (e.g., prefix 0 for octal, 0x for hex).
 *
 * Description: This structure is used to store the state of each flag in a
 *              format specifier. Each flag is represented by a single bit.
 */
typedef struct flags
{
	unsigned int flag_space:1;
	unsigned int flag_plus:1;
	unsigned int flag_minus:1;
	unsigned int flag_zero:1;
	unsigned int flag_hash:1;
} flags_t;

/**
 * struct precision - A structure to store precision details.
 * @value: Precision value specified in the format (".2" for precision 2).
 * @is_set: Flag to indicate whether the precision was explicitly set
 *           (1 if set, 0 otherwise).
 *
 * Description: This structure represents the precision specified in
 *               a format specifier. It holds the precision value and indicates
 *               whether the precision was defined in the format string.
 */
typedef struct precision
{
	short int value;
	char is_set;
} precision_t;

/**
 * struct fs - A structure to hold the components of a format specifier.
 * @flags: A structure of type `flags_t` that holds the flag settings.
 * @width: Represents the minimum field width for the output.
 *          If specified, the output is padded with spaces if it is shorter
 *          than this width.
 * @precision: Represents the precision for the output.
 *              For numbers, this specifies the minimum number of digits.
 *              For strings, it limits the number of characters.
 * @length: Represents the length modifier.
 *           This can be 'l', 'h', or other characters indicating the size
 *           of the argument.
 * @type_conversion: Represents the type conversion specifier.
 *                    This can be 'd', 'i', 'o', 'x', etc., determining
 *                    the type of output.
 *
 * Description: This structure encapsulates all components of a format
 *               specifier in the printf-style functions. It is used to parse
 *               and store the state of each specifier in the format string.
 */
typedef struct fs
{
	flags_t flags;
	precision_t precision;
	short int width;
	char length;
	char type_conversion;
} fs_t;

/**
 * struct type - A structure to map format specifier types to their
 *                corresponding functions.
 * @type: A string representing the format specifier (e.g., "d" for integers,
 *         "s" for strings).
 * @f: A pointer to the function that handles the printing of the specific
 *      type.
 *     The function takes the following arguments:
 *     - buf: A pointer to the buffer where the output should be written.
 *     - buf_index: A pointer to the current index in the buffer.
 *     - fs: A pointer to a struct that holds the format specifier
 *            details (flags, width, precision, etc.).
 *     - ap: A `va_list` containing the variadic arguments.
 *     Returns `int` which is the bytes written to the console by `write()`.
 *
 * Description: This structure links a format specifier type (as a string)
 *               to a specific function that processes and outputs the data
 *               corresponding to that type.
 */
typedef struct type
{
	char *type;
	int (*f)(char *buf, int *buf_index, fs_t *fs, va_list ap);
} type_t;

/**
 * struct length_functions - A structure to hold function pointers for
 *                            handling numbers based on length modifiers.
 * @num_digits: Pointer to a function that calculates the number of digits
 *               in a given number, considering the length modifier
 *               (e.g., short, long).
 *              This function takes the following arguments:
 *              - num: A void pointer to the number (allows various
 *                      numeric types).
 *              - base: The base in which the number is represented
 *                       (e.g., 10 for decimal, 2 for binary).
 *              - is_signed: A flag indicating if the number is signed
 *                            (1 for signed, 0 for unsigned).
 *              Returns the digit count of the number in the specified base.
 * @num_to_str: Pointer to a function that converts a number to its string
 *               representation, adjusted by the length modifier.
 *              This function takes the following arguments:
 *              - buf: A pointer to the buffer where the output string should
 *                      be written.
 *              - buf_size: The size of the buffer.
 *              - num: A void pointer to the number being converted.
 *              - num_len: The length (number of digits) of the number
 *                          in the specified base.
 *              - base: The base for the number conversion
 *                       (e.g., 10 for decimal, 2 for binary).
 *              - is_signed: A flag indicating if the number is signed
 *                            (1 for signed, 0 for unsigned).
 *              Returns a pointer to the buffer containing the string
 *               representation of the number.
 *
 * Description: This structure is designed to hold function pointers that
 *               perform operations (digit counting and string conversion)
 *               on numbers based on their length modifiers.
 */
typedef struct length_functions {
	int (*num_digits)(void *num, int base, char is_signed);
	char *(*num_to_str)(char *buf, int buf_size, void *num, int num_len,
			int base, char is_signed);
} length_functions_t;

/**
 * struct length_modifier - A structure that maps length modifiers to their
 *                           corresponding numeric handling functions.
 * @modifier: A string representing the length modifier
 *             (e.g., "h" for short, "l" for long).
 *            This string is used to match the correct length modifier when
 *             selecting functions for number operations.
 * @functions: An instance of `length_functions_t` containing the function
 *              pointers for:
 *             - num_digits: Calculating the number of digits.
 *             - num_to_str: Converting the number to a string representation.
 *
 * Description: This structure links a specific length modifier to its
 *               corresponding functions for numeric operations. It allows
 *               for dynamic selection of the correct functions based on
 *               the provided length modifier.
 */
typedef struct length_modifier {
	char *modifier;
	length_functions_t functions;
} length_modifier_t;

int _printf(const char *format, ...);
int handle_str(const char *str, int str_len, char *buf, int *buf_index);
int handle_fs(const char *format, char *buf, int *buf_index,
		int *total_bytes_written, va_list ap);
int get_fs_values(const char *format, fs_t *fs, va_list ap);
int (*get_type_func(char ch))(char *, int *, fs_t *, va_list);
char *_strncpy(char *dest, const char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
char *_to_upper(char *buf, int buf_size);
int _isdigit(int c);
int _num_digits(void *num, int base, char is_signed);
int _hnum_digits(void *num, int base, char is_signed);
int _lnum_digits(void *num, int base, char is_signed);
char *_num_to_str(char *buf, int buf_size, void *num, int num_len,
		int base, char is_signed);
char *_hnum_to_str(char *buf, int buf_size, void *num, int num_len,
		int base, char is_signed);
char *_lnum_to_str(char *buf, int buf_size, void *num, int num_len,
		int base, char is_signed);
length_functions_t get_length_func(char ch);
int _check_buf(char *buf, int *buf_index);
int apply_padding(char *buf, int *buf_index, char padding_ch, int padding_len);

int handle_i(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_o(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_x(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_X(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_u(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_c(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_s(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_S(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_b(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_r(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_R(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_p(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_n(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_mod_symbol(char *buf, int *buf_index, fs_t *fs, va_list ap);
int handle_unrecognized_fs(char *buf, int *buf_index, fs_t *fs);

#endif /* MAIN_H */

