#include "../../main.h"

int main(void)
{
	char c;
	/*
	 * %p
	 *
	 * 1. (' ' -> √)
	 * 2. ('+' -> √)
	 * 3. ('-' -> √)
	 * 4. ('0' -> √)
	 * 5. ('#' -> √) -> always enabled even if the user doesn't enable it
	 * 6. (width -> √)
	 * 7. (precision -> X)
	 */
	/*
	 * Uncomment the below comment when you try to test your own `_printf`,
	 *  and compare its results with the C `printf` results.
	 */
	/**/
	_printf("My _printf\n");
	_printf("=========\n");

	_printf("01.address:%p$\n", &c);
	_printf("02.address:%#p$\n", &c);
	_printf("03.address:%20p$\n", &c);
	_printf("04.address:%020p$\n", &c);
	_printf("05.address:%20.5p$\n", &c);
	_printf("06.address:% 20.5p$\n", &c);
	_printf("07.address:%+ 20.5p$\n", &c);
	_printf("08.address:%+ 20.5p$\n", (void *)-1);
	_printf("08.address:%- 20.5p$\n", (void *)-1);
	_printf("09.address:% 020.5p$\n", &c);
	_printf("10.address:%+ 020.5p$\n", &c);
	_printf("11.address:%+ 020.5p$\n", (void *)-1);
	_printf("12.address:%- 020.5p$\n", (void *)-1);
	_printf("13.address:%-20p$\n", &c);
	_printf("14.address:%-020p$\n", &c);
	_printf("15.address:%+p$\n", &c);
	_printf("16.address:% p$\n", &c);
	_printf("=========\n");
	_printf("01.address:%p$\n", c);
	_printf("02.address:%#p$\n", c);
	_printf("03.address:%20p$\n", c);
	_printf("04.address:%020p$\n", c);
	_printf("05.address:%20.5p$\n", c);
	_printf("06.address:%-20p$\n", c);
	_printf("07.address:%-020p$\n", c);
	_printf("08.address:%+p$\n", c);
	_printf("09.address:% p$\n", c);
	_printf("10.address:%p$\n", NULL);


	printf("==============================================\n");

	printf("The C printf\n");
	printf("=========\n");

	printf("01.address:%p$\n", &c);
	printf("02.address:%#p$\n", &c);
	printf("03.address:%20p$\n", &c);
	printf("04.address:%020p$\n", &c);
	printf("05.address:%20.5p$\n", &c);
	printf("06.address:% 20.5p$\n", &c);
	printf("07.address:%+ 20.5p$\n", &c);
	printf("08.address:%+ 20.5p$\n", (void *)-1);
	printf("08.address:%- 20.5p$\n", (void *)-1);
	printf("09.address:% 020.5p$\n", &c);
	printf("10.address:%+ 020.5p$\n", &c);
	printf("11.address:%+ 020.5p$\n", (void *)-1);
	printf("12.address:%- 020.5p$\n", (void *)-1);
	printf("13.address:%-20p$\n", &c);
	printf("14.address:%-020p$\n", &c);
	printf("15.address:%+p$\n", &c);
	printf("16.address:% p$\n", &c);
	printf("=========\n");
	printf("01.address:%p$\n", c);
	printf("02.address:%#p$\n", c);
	printf("03.address:%20p$\n", c);
	printf("04.address:%020p$\n", c);
	printf("05.address:%20.5p$\n", c);
	printf("06.address:%-20p$\n", c);
	printf("07.address:%-020p$\n", c);
	printf("08.address:%+p$\n", c);
	printf("09.address:% p$\n", c);
	printf("10.address:%p$\n", NULL);

	return (0);
}
