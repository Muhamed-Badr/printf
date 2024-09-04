#ifndef MAIN_H
#define MAIN_H

/* ======================================================================== */
/* 
 * Usage: UNUSED(variable_name)
 *  -> for more information visit: https://stackoverflow.com/a/3418029
 */
#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif
/* ======================================================================== */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#define BUF_SIZE 1024

typedef struct flags
{
	unsigned int flag_space:1;
	unsigned int flag_plus:1;
	unsigned int flag_minus:1;
	unsigned int flag_zero:1;
	unsigned int flag_hash:1;
} flags_t;

typedef struct fs
{
	flags_t flags;
	int width;
	int precision;
	char length;
	char type_conversion;
} fs_t;

typedef struct type
{
	char *type;
	int (*f)(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
} type_t;

int _printf(const char *format, ...);
int handle_str(const char *str, int str_len, char *buf, int *buf_index,
		int *debug_num);
int handle_fs(const char *format, char *buf, int *buf_index,
		int *total_bytes_written, va_list ap, int *debug_num);
int get_fs_values(const char *format, fs_t *fs, int *debug_num);
char *_strncpy(char *dest, const char *src, int n, int *depug_num);
int _strlen(char *s, int *debug_num);

int handle_i(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_o(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_x(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_X(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_u(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_c(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_s(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_S(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_b(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_r(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_R(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_p(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_n(char *buf, int *buf_index, fs_t *fs, va_list ap, int *debug_num);
int handle_mod_symbol(char *buf, int *buf_index, fs_t *fs, va_list ap,
		int *debug_num);

#endif /* MAIN_H */
