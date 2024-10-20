#include <stdio.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
	long long int l, res;
	int n;


	puts("[My `_printf`]");
	puts("=========\n");

	puts("===[%u]======");
	n = _printf("%u\n", 1024);
	printf("n: %d\n", n);
	n = _printf("%u\n", -1024);
	printf("n: %d\n", n);
	n = _printf("%u\n", 0);
	printf("n: %d\n", n);
	n = _printf("%u\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = _printf("%u\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = _printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = _printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = _printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%o]======");
	n = _printf("%o\n", 1024);
	printf("n: %d\n", n);
	n = _printf("%o\n", -1024);
	printf("n: %d\n", n);
	n = _printf("%o\n", 0);
	printf("n: %d\n", n);
	n = _printf("%o\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = _printf("%o\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = _printf("There is %o bytes in %o KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = _printf("%o - %o = %o\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = _printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%x]======");
	n = _printf("%x\n", 1024);
	printf("n: %d\n", n);
	n = _printf("%x\n", -1024);
	printf("n: %d\n", n);
	n = _printf("%x\n", 0);
	printf("n: %d\n", n);
	n = _printf("%x\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = _printf("%x\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = _printf("There is %x bytes in %x KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = _printf("%x - %x = %x\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = _printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%X]======");
	n = _printf("%X\n", 1024);
	printf("n: %d\n", n);
	n = _printf("%X\n", -1024);
	printf("n: %d\n", n);
	n = _printf("%X\n", 0);
	printf("n: %d\n", n);
	n = _printf("%X\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = _printf("%X\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = _printf("There is %X bytes in %X KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = _printf("%X - %X = %X\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX + 1024; /* where res is a long int equals to INT_MAX + 1024 */
	n = _printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[all]======");
	n = _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	printf("n: %d\n", n);
	n = _printf("uuoxxX%xuoXo\n", 1024);
	printf("n: %d\n", n);



	printf("==============================================\n");

	puts("[The C `printf`]");
	puts("=========\n");

	puts("===[%u]======");
	n = printf("%u\n", 1024);
	printf("n: %d\n", n);
	n = printf("%u\n", -1024);
	printf("n: %d\n", n);
	n = printf("%u\n", 0);
	printf("n: %d\n", n);
	n = printf("%u\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = printf("%u\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = printf("There is %u bytes in %u KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = printf("%u + %u = %u\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%o]======");
	n = printf("%o\n", 1024);
	printf("n: %d\n", n);
	n = printf("%o\n", -1024);
	printf("n: %d\n", n);
	n = printf("%o\n", 0);
	printf("n: %d\n", n);
	n = printf("%o\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = printf("%o\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = printf("There is %o bytes in %o KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = printf("%o - %o = %o\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = printf("%o + %o = %o\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%x]======");
	n = printf("%x\n", 1024);
	printf("n: %d\n", n);
	n = printf("%x\n", -1024);
	printf("n: %d\n", n);
	n = printf("%x\n", 0);
	printf("n: %d\n", n);
	n = printf("%x\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = printf("%x\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = printf("There is %x bytes in %x KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = printf("%x - %x = %x\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX * 2; /* where res is a long int equals to INT_MAX * 2 */
	n = printf("%x + %x = %x\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[%X]======");
	n = printf("%X\n", 1024);
	printf("n: %d\n", n);
	n = printf("%X\n", -1024);
	printf("n: %d\n", n);
	n = printf("%X\n", 0);
	printf("n: %d\n", n);
	n = printf("%X\n", UINT_MAX);
	printf("n: %d\n", n);
	l = UINT_MAX + 1024;
	n = printf("%X\n", l); /* where l is a long int equals to UINT_MAX + 1024 */
	printf("n: %d\n", n);
	n = printf("There is %X bytes in %X KB\n", 1024, 1);
	printf("n: %d\n", n);
	n = printf("%X - %X = %X\n", 2048, 1024, 1024);
	printf("n: %d\n", n);
	res = INT_MAX + 1024; /* where res is a long int equals to INT_MAX + 1024 */
	n = printf("%X + %X = %X\n", INT_MAX, INT_MAX, res);
	printf("n: %d\n", n);
	puts("===[all]======");
	n = printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	printf("n: %d\n", n);
	n = printf("uuoxxX%xuoXo\n", 1024);
	printf("n: %d\n", n);


	return (0);
}
