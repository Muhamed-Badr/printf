#include <stdio.h>
#include <limits.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*
	 * %r
	 *
	 * 1. (' ' -> X)
	 * 2. ('+' -> X)
	 * 3. ('-' -> √)
	 * 4. ('0' -> X)
	 * 5. ('#' -> X)
	 * 6. (width -> √)
	 * 7. (precision -> √)
	 */

	char *str = "Hello, Geeks :)";
	int n;

	_printf("My _printf\n");
	_printf("=========\n");
	_printf("0.n:123456789\n");
	_printf("1.n:%#-+0 5r$\n", str);
	_printf("2.n:% #5r$\n", str);
	_printf("3.n:%#5r$\n", str);
	_printf("4.n:%+#7r$\n", str);
	_printf("5.n:%# 5r$\n", str);
	_printf("6.n:%#-+0 5.3r$\n", str);
	_printf("7.n:%#+0 5.3r$\n", str); 
	_printf("8.n:%#+ 5.3r$\n", str); 
	_printf("9.n:%#-+0 .5r$\n", str);
	_printf("10.n:%#-+0 .r$\n", str);
	_printf("11.n:%#-+0 0.5r$\n", str);
	_printf("12.n:%#-+0 0.20r$\n", str);
	_printf("13.n:%r$\n", "");
	_printf("14.n:%r$\n", NULL); // (print "(null)" instead)
	_printf("15.n:%9r$\n", NULL);
	_printf("16.n:%9.3r$\n", NULL);
	_printf("17.n:%.3r$\n", NULL);
	_printf("18.n:%.r$\n", NULL);
	_printf("19.n:%-9.3r$\n", NULL);


	printf("==============================================\n");

	n = _printf("%r$", "\nThis sentence is retrieved from va_args!");
	printf("n: %d\n", n);
	n = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	printf("n: %d\n", n);
	n = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	printf("n: %d\n", n);


	return (0);
}
