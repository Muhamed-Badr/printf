#include <stdio.h>
#include "../main.h"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	if (*argv[1] == '1')
		puts("[1] I'm puts()");

	if (argv[1][1] == '1')
		printf("[2] I'm printf() without '\\n'");
	else if (argv[1][1] == '2')
		printf("[2] I'm printf() with '\\n'\n");
	else if (argv[1][1] == '3')
		_printf("[2] I'm _printf() without '\\n'");
	else if (argv[1][1] == '4')
		_printf("[2] I'm _printf() with '\\n'\n");
	else if (argv[1][1] == '5')
		puts("[2] I'm puts()");

	return (0);
}
