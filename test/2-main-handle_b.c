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
	long long int l, res;
	int n;

	puts("[My `_printf`]");
	puts("=========");

	n = _printf("%b\n", 0);
	printf("n: %d\n", n);
	n = _printf("%b\n", 13);
	printf("n: %d\n", n);
	n = _printf("%b\n", -13);
	printf("n: %d\n", n);
	n = _printf("%b\n", 27);
	printf("n: %d\n", n);
	n = _printf("%b\n", 112);
	printf("n: %d\n", n);
	n = _printf("%b\n", 108);
	printf("n: %d\n", n);
	n = _printf("%b\n", -108);
	printf("n: %d\n", n);
	n = _printf("%b\n", 1024);
	printf("n: %d\n", n);
	n = _printf("%b\n", -1024);
	printf("n: %d\n", n);
	n = _printf("%b\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = _printf("%b\n", l); /*where l is a long int equals to UINT_MAX + 1024*/
	printf("n: %d\n", n);
	n = _printf("There is %b bytes in %b KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = _printf("There is %b bits in %b byte\n", 8, 1);
	printf("n: %d\n", n);
	n = _printf("%b - %b = %b\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is long int equals to INT_MAX * 2 */
	n = _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);


	return (0);
}
