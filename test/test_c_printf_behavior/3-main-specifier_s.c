#include "../../main.h"

int main(void)
{
	/*
	 * %s
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

	_printf("My _printf\n");
	_printf("=========\n");
	_printf("0.n:123456789\n");
	_printf("1.n:%#-+0 5s$\n", str);
	_printf("2.n:% #5s$\n", str);
	_printf("3.n:%#5s$\n", str);
	_printf("4.n:%+#7s$\n", str);
	_printf("5.n:%# 5s$\n", str);
	_printf("6.n:%#-+0 5.3s$\n", str);
	_printf("7.n:%#+0 5.3s$\n", str); 
	_printf("8.n:%#+ 5.3s$\n", str); 
	_printf("9.n:%#-+0 .5s$\n", str);
	_printf("10.n:%#-+0 .s$\n", str);
	_printf("11.n:%#-+0 0.5s$\n", str);
	_printf("12.n:%#-+0 0.20s$\n", str);
	_printf("13.n:%s$\n", "");
	_printf("14.n:%s$\n", NULL); // (print "(null)" instead)
	_printf("15.n:%9s$\n", NULL);
	_printf("16.n:%9.3s$\n", NULL);
	_printf("17.n:%.3s$\n", NULL);
	_printf("18.n:%.s$\n", NULL);
	_printf("19.n:%-9.3s$\n", NULL);


	printf("==============================================\n");

	_printf("The C printf\n");
	_printf("=========\n");

	printf("0.n:123456789\n");
	printf("1.n:%#-+0 5s$\n", str);
	printf("2.n:% #5s$\n", str);
	printf("3.n:%#5s$\n", str);
	printf("4.n:%+#7s$\n", str);
	printf("5.n:%# 5s$\n", str);
	printf("6.n:%#-+0 5.3s$\n", str);
	printf("7.n:%#+0 5.3s$\n", str); 
	printf("8.n:%#+ 5.3s$\n", str); 
	printf("9.n:%#-+0 .5s$\n", str);
	printf("10.n:%#-+0 .s$\n", str);
	printf("11.n:%#-+0 0.5s$\n", str);
	printf("12.n:%#-+0 0.20s$\n", str);
	printf("13.n:%s$\n", "");
	printf("14.n:%s$\n", NULL); // (print "(null)" instead)
	printf("15.n:%9s$\n", NULL);
	printf("16.n:%9.3s$\n", NULL);
	printf("17.n:%.3s$\n", NULL);
	printf("18.n:%.s$\n", NULL);
	printf("18.n:%-9.3s$\n", NULL);

	_printf("=========\n");
	/* test the behavior of precision and how its value set with float */
	printf("1.n:%.f$\n", 3.123);
	printf("2.n:%.0f$\n", 3.123);
	printf("3.n:%f$\n", 3.123);

	return (0);
}
