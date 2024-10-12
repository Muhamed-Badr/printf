#include "../../main.h"

int main(void)
{
	/*
	 * %c
	 *
	 * 1. (' ' -> X)
	 * 2. ('+' -> X)
	 * 3. ('-' -> √)
	 * 4. ('0' -> X)
	 * 5. ('#' -> X)
	 * 6. (width -> √)
	 * 7. (precision -> X)
	 */
	_printf("My _printf\n");
	_printf("=========\n");

	_printf("0.n:123456789\n");
	_printf("1.n:%#-+0 5c$\n", 'a');
	_printf("2.n:% #5c$\n", 'b');
	_printf("3.n:%#5c$\n", 'c');
	_printf("4.n:%+#7c$\n", 'd');
	_printf("5.n:%# 5c$\n", 'e');
	_printf("6.n:%#-+0 5.3c$\n", 'f');
	_printf("7.n:%#-+0 .5c$\n", 'g');
	_printf("8.n:%#-+0 0.5c$\n", 'h');
	_printf("9.n:%c$\n", 65);
	_printf("10.n:%c$\n", -5);
	_printf("11.n:%c$\n", 200);


	printf("==============================================\n");

	_printf("The C printf\n");
	_printf("=========\n");

	printf("0.n:123456789\n");
	printf("1.n:%#-+0 5c$\n", 'a');
	printf("2.n:% #5c$\n", 'b');
	printf("3.n:%#5c$\n", 'c');
	printf("4.n:%+#7c$\n", 'd');
	printf("5.n:%# 5c$\n", 'e');
	printf("6.n:%#-+0 5.3c$\n", 'f');
	printf("7.n:%#-+0 .5c$\n", 'g');
	printf("8.n:%#-+0 0.5c$\n", 'h');
	printf("9.n:%c$\n", 65);
	printf("10.n:%c$\n", -5);
	printf("11.n:%c$\n", 200);

	return (0);
}
