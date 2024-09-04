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
	long int l;
	int n;
	n = _printf("%d\n", 1024);
	printf("n: %d\n");
	n = printf("%d\n", 1024);
	printf("n: %d\n");
	n = _printf("%d\n", -1024);
	printf("n: %d\n");
	n = printf("%d\n", -1024);
	printf("n: %d\n");
	n = _printf("%d\n", 0);
	printf("n: %d\n");
	n = printf("%d\n", 0);
	printf("n: %d\n");
	n = _printf("%d\n", INT_MAX);
	printf("n: %d\n");
	n = printf("%d\n", INT_MAX);
	printf("n: %d\n");
	n = _printf("%d\n", INT_MIN);
	printf("n: %d\n");
	n = printf("%d\n", INT_MIN);
	printf("n: %d\n");
	l = INT_MAX + 1024;
	n = _printf("%d\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	printf("n: %d\n");
	n = printf("%d\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	printf("n: %d\n");
	l = INT_MAX - 1024;
	n = _printf("%d\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	printf("n: %d\n");
	n = printf("%d\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	printf("n: %d\n");
	n = _printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("n: %d\n");
	n = printf("There is %d bytes in %d KB\n", 1024, 1);
	printf("n: %d\n");
	n = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("n: %d\n");
	n = printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("n: %d\n");
	n = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("n: %d\n");
	n = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("n: %d\n");
	n = _printf("%i\n", 1024);
	printf("n: %d\n");
	n = printf("%i\n", 1024);
	printf("n: %d\n");
	n = _printf("%i\n", -1024);
	printf("n: %d\n");
	n = printf("%i\n", -1024);
	printf("n: %d\n");
	n = _printf("%i\n", 0);
	printf("n: %d\n");
	n = printf("%i\n", 0);
	printf("n: %d\n");
	n = _printf("%i\n", INT_MAX);
	printf("n: %d\n");
	n = printf("%i\n", INT_MAX);
	printf("n: %d\n");
	n = _printf("%i\n", INT_MIN);
	printf("n: %d\n");
	n = printf("%i\n", INT_MIN);
	printf("n: %d\n");
	l = INT_MAX + 1024;
	n = _printf("%i\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	printf("n: %d\n");
	n = printf("%i\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	printf("n: %d\n");
	l = INT_MAX - 1024;
	n = _printf("%i\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	printf("n: %d\n");
	n = printf("%i\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	printf("n: %d\n");
	n = _printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("n: %d\n");
	n = printf("There is %i bytes in %i KB\n", 1024, 1);
	printf("n: %d\n");
	n = _printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("n: %d\n");
	n = printf("%i - %i = %i\n", 1024, 2048, -1024);
	printf("n: %d\n");
	n = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("n: %d\n");
	n = printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("n: %d\n");
	n = _printf("%d == %i\n", 1024, 1024);
	printf("n: %d\n");
	n = printf("%d == %i\n", 1024, 1024);
	printf("n: %d\n");
	n = _printf("iddi%diddiiddi\n", 1024);
	printf("n: %d\n");
	n = printf("iddi%diddiiddi\n", 1024);
	printf("n: %d\n");
	n = _printf("%d\n", 10000);
	printf("n: %d\n");
	n = printf("%d\n", 10000);
	printf("n: %d\n");
	n = _printf("%i\n", 10000);
	printf("n: %d\n");
	n = printf("%i\n", 10000);
	printf("n: %d\n");

	return (0);
}
