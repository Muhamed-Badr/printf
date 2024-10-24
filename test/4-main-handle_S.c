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
	 * %S
	 *
	 * 1. (' ' -> X)
	 * 2. ('+' -> X)
	 * 3. ('-' -> √)
	 * 4. ('0' -> X)
	 * 5. ('#' -> X)
	 * 6. (width -> √)
	 * 7. (precision -> √)
	 */

	char *str = "\nHello, Geeks :)";
	int n;

	_printf("My _printf\n");
	_printf("=========\n");
	_printf("0.n:123456789\n");
	_printf("1.n:%#-+0 5S$\n", str);
	_printf("2.n:% #5S$\n", str);
	_printf("3.n:%#5S$\n", str);
	_printf("4.n:%+#7S$\n", str);
	_printf("5.n:%# 5S$\n", str);
	_printf("6.n:%#-+0 5.3S$\n", str);
	_printf("7.n:%#+0 5.3S$\n", str); 
	_printf("8.n:%#+ 5.3S$\n", str); 
	_printf("9.n:%#-+0 .5S$\n", str);
	_printf("10.n:%#-+0 .S$\n", str);
	_printf("11.n:%#-+0 0.5S$\n", str);
	_printf("12.n:%#-+0 0.20S$\n", str);
	_printf("13.n:%S$\n", "");
	_printf("14.n:%S$\n", NULL); // (print "(null)" instead)
	_printf("15.n:%9S$\n", NULL);
	_printf("16.n:%9.3S$\n", NULL);
	_printf("17.n:%.3S$\n", NULL);
	_printf("18.n:%.S$\n", NULL);
	_printf("19.n:%-9.3S$\n", NULL);


	printf("==============================================\n");

	n = _printf("%S$\n", "No special character.");
	printf("n: %d\n", n);
	n = _printf("%S$\n", "\n");
	printf("n: %d\n", n);
	n = _printf("%S$\n", "Best\nSchool");
	printf("n: %d\n", n);
	n = _printf("%S$\n", "\x01\x02\x03\x04\x05\x06\x07");
	printf("n: %d\n", n);
	n = _printf("Could you print some non-prntable characters?$\n%S$\nThanks!$\n", "Sure:\x1F\x7F\n");
	printf("n: %d\n", n);
	n = _printf("");
	printf("n: %d\n", n);
	n = _printf("- What did you say?$\n- %S$\n- That's what I thought.$\n", "");
	printf("n: %d\n", n);


	return (0);
}
