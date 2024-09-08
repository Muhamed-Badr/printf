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
	long long int l;
	int n;

	puts("===START [My `_printf`]===========================================");
	n = _printf("%d\n", 1024);
	printf("n: %d\n", n);
	puts("===END [My `_printf`]=============================================");


	puts("===START [The C `printf`]=========================================");
	n = printf("%d\n", 1024);
	printf("n: %d\n", n);
	puts("===END [The C `printf`]===========================================");


	return (0);
}
