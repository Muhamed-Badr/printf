#include <stdio.h>

/**
 * run `man 3 printf` to check the documentation of C `printf`
 */
int main(void)
{
	int n;


	n = printf("a %a");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("b %b");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("c %c");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("d %d");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("e %e");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("f %f");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("g %g");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("h %h");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("i %i");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("j %j");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("k %k");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("l %l");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("m %m");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("n %n");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("o %o");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("p %p");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("q %q");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("r %r");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("s %s");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("t %t");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("u %u");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("v %v");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("w %w");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("x %x");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("y %y");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("z %z");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	puts("=========");

	n = printf("A %A");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("B %B");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("C %C");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("D %D");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("E %E");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("F %F");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("G %G");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("H %H");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("I %I");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("J %J");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("K %K");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("L %L");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("M %M");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("N %N");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("O %O");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("P %P");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("Q %Q");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("R %R");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("S %S");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("T %T");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("U %U");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("V %V");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("W %W");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("X %X");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("Y %Y");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);

	n = printf("Z %Z");
	if (n == -1)
		printf("\nn: %d (not a valid fs, type conversion not determined)\n", n);
	else if (n == 4)
		printf("\nn: %d (not a fs)\n", n);
	else
		printf("\nn: %d\n", n);


	return (0);
}
