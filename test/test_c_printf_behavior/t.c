#include <stdio.h>

typedef struct flags
{
	unsigned int space:1;
	unsigned int plus:1;
	unsigned int minus:1;
	unsigned int zero:1;
	unsigned int hash:1;
} flags_t;

typedef struct fs
{
	flags_t flags;
	unsigned short int width;
	unsigned short int precision;
	char length;
	char type_conversion;
	unsigned short int w;
	char i;
} fs_t;

int main(void)
{
	fs_t fs = {{0, 0, 0, 0, 0}, 0, 6, '\0', '\0'};
	/*
	   int n;

	   n = printf(NULL);
	   printf("\n");
	   printf("n:%d\n", n);

	   n = printf("");
	   printf("n:%d\n", n);

	   n = printf("%        k\n");
	   printf("n:%                               d\n", n);

	   n = printf("%             0-6-d\n", 5);
	   printf("n:%                               d\n", n);

	   n = printf("%!\n");
	   printf("               n: %d\n", n);

	   printf("%5 . 3f\n", 1.123);
	   printf("%5. 3f\n", 1.123);
	   printf("%5 .3f\n", 1.123);
	   printf("%5 f\n", 1.123);
	   printf("%5f\n", 1.123);
	   printf("%5.3 f\n", 1.123);
	   printf("% 5.3f\n", 1.123);
	 */

	/*
	printf("%S\n", "hello,\nGeeks\n:)");
	printf("%.f\n", 1.123);
	*/

	/*
	printf("sizeof(flags_t): %ld\n", sizeof(flags_t));
	printf("sizeof(fs_t): %ld\n", sizeof(fs_t));
	*/

	printf("n:123456789\n");
	printf("n:%-0 3d\n", 6);
	printf("n:%-+03d\n", 6);
	printf("n:%-0 1d\n", 6);
	printf("n:%-+01d\n", 6);
	printf("n:%-0 2d\n", 6);
	printf("n:%-+02d\n", 6);

	return (0);
}
