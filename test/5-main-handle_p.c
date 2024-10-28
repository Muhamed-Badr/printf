#include <stdio.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
	int n;


	puts("[My `_printf`]");
	puts("=========\n");

	n = _printf("%p\n", (void *)0x7fff5100b608);
	printf("n: %d\n", n);
	n = _printf("%p\n", NULL);
	printf("n: %d\n", n);
	n = _printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("n: %d\n", n);
	n = _printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("n: %d\n", n);
	n = _printf("");
	printf("n: %d\n", n);
	n = _printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	printf("n: %d\n", n);
	n = _printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("n: %d\n", n);


	printf("==============================================\n");

	puts("[The C `printf`]");
	puts("=========\n");

	n = printf("%p\n", (void *)0x7fff5100b608);
	printf("n: %d\n", n);
	n = printf("%p\n", NULL);
	printf("n: %d\n", n);
	n = printf("Can you print an address?\n%p\nNice!\n", (void *)0x7fff5100b6f8);
	printf("n: %d\n", n);
	n = printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", (void *)0x7fff5100b6f8, (void *)0x7faf51f0f608, (void *)0x6ff42510b6f8, (void *)0x7fff510236f8);
	printf("n: %d\n", n);
	n = printf("");
	printf("n: %d\n", n);
	n = printf("Can you print an address?\n%p\nNice!\n", (void *)-1);
	printf("n: %d\n", n);
	n = printf("%pppp\n", (void *)0x7fff5100b6f8);
	printf("n: %d\n", n);


	return (0);
}
