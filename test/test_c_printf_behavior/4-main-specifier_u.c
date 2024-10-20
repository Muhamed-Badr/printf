#include "../../main.h"

int main(void)
{
	/*
	 * %u
	 *
	 * 1. (' ' -> X)
	 * 2. ('+' -> X)
	 * 3. ('-' -> √)
	 * 4. ('0' -> √)
	 * 5. ('#' -> X)
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

	_printf("00.n:123456789\n");
	_printf("01.n:%u$\n", 6);
	_printf("02.n:%u$\n", -6);
	_printf("03.n:%0u$\n", 6);
	_printf("04.n:%0u$\n", -6);
	_printf("05.n:%1u$\n", 6);
	_printf("06.n:%1u$\n", -6);
	_printf("07.n:%2u$\n", 6);
	_printf("08.n:%2u$\n", -6);
	_printf("09.n:%+2u$\n", 6);
	_printf("10.n:%+2u$\n", -6);
	_printf("11.n:%5u$\n", 6);
	_printf("12.n:%5u$\n", -6);
	_printf("13.n:%+5u$\n", 6);
	_printf("14.n:%+5u$\n", -6);
	_printf("15.n:%05u$\n", 6);
	_printf("16.n:%05u$\n", -6);
	_printf("17.n:%+05u$\n", 6);
	_printf("18.n:%+05u$\n", -6);
	_printf("19.n:% u$\n", 6);
	_printf("20.n:% u$\n", -6);
	_printf("21.n:%0 5u$\n", -6);
	_printf("22.n:%0 5u$\n", 6);
	_printf("23.n:%0 +5u$\n", 6);
	_printf("24.n:%0# +5u$\n", 6);
	_printf("25.n:%0# +5u$\n", -6);
	_printf("=========\n");
	_printf("01.n:%-u$\n", 6);
	_printf("02.n:%-u$\n", -6);
	_printf("03.n:%-0u$\n", 6);
	_printf("04.n:%-0u$\n", -6);
	_printf("05.n:%-1u$\n", 6);
	_printf("06.n:%-1u$\n", -6);
	_printf("07.n:%-2u$\n", 6);
	_printf("08.n:%-2u$\n", -6);
	_printf("09.n:%-+2u$\n", 6);
	_printf("10.n:%-+2u$\n", -6);
	_printf("11.n:%-5u$\n", 6);
	_printf("12.n:%-5u$\n", -6);
	_printf("13.n:%-+5u$\n", 6);
	_printf("14.n:%-+5u$\n", -6);
	_printf("15.n:%-05u$\n", 6);
	_printf("16.n:%-05u$\n", -6);
	_printf("17.n:%-+05u$\n", 6);
	_printf("18.n:%-+05u$\n", -6);
	_printf("19.n:%- u$\n", 6);
	_printf("20.n:%- u$\n", -6);
	_printf("21.n:%-0 5u$\n", -6);
	_printf("22.n:%-0 5u$\n", 6);
	_printf("23.n:%-0 +5u$\n", 6);
	_printf("24.n:%-0# +5u$\n", 6);
	_printf("25.n:%-0# +5u$\n", -6);


	printf("==============================================\n");

	printf("The C printf\n");
	printf("=========\n");

	printf("00.n:123456789\n");
	printf("01.n:%u$\n", 6);
	printf("02.n:%u$\n", -6);
	printf("03.n:%0u$\n", 6);
	printf("04.n:%0u$\n", -6);
	printf("05.n:%1u$\n", 6);
	printf("06.n:%1u$\n", -6);
	printf("07.n:%2u$\n", 6);
	printf("08.n:%2u$\n", -6);
	printf("09.n:%+2u$\n", 6);
	printf("10.n:%+2u$\n", -6);
	printf("11.n:%5u$\n", 6);
	printf("12.n:%5u$\n", -6);
	printf("13.n:%+5u$\n", 6);
	printf("14.n:%+5u$\n", -6);
	printf("15.n:%05u$\n", 6);
	printf("16.n:%05u$\n", -6);
	printf("17.n:%+05u$\n", 6);
	printf("18.n:%+05u$\n", -6);
	printf("19.n:% u$\n", 6);
	printf("20.n:% u$\n", -6);
	printf("21.n:%0 5u$\n", -6);
	printf("22.n:%0 5u$\n", 6);
	printf("23.n:%0 +5u$\n", 6);
	printf("24.n:%0# +5u$\n", 6);
	printf("25.n:%0# +5u$\n", -6);
	printf("=========\n");
	printf("01.n:%-u$\n", 6);
	printf("02.n:%-u$\n", -6);
	printf("03.n:%-0u$\n", 6);
	printf("04.n:%-0u$\n", -6);
	printf("05.n:%-1u$\n", 6);
	printf("06.n:%-1u$\n", -6);
	printf("07.n:%-2u$\n", 6);
	printf("08.n:%-2u$\n", -6);
	printf("09.n:%-+2u$\n", 6);
	printf("10.n:%-+2u$\n", -6);
	printf("11.n:%-5u$\n", 6);
	printf("12.n:%-5u$\n", -6);
	printf("13.n:%-+5u$\n", 6);
	printf("14.n:%-+5u$\n", -6);
	printf("15.n:%-05u$\n", 6);
	printf("16.n:%-05u$\n", -6);
	printf("17.n:%-+05u$\n", 6);
	printf("18.n:%-+05u$\n", -6);
	printf("19.n:%- u$\n", 6);
	printf("20.n:%- u$\n", -6);
	printf("21.n:%-0 5u$\n", -6);
	printf("22.n:%-0 5u$\n", 6);
	printf("23.n:%-0 +5u$\n", 6);
	printf("24.n:%-0# +5u$\n", 6);
	printf("25.n:%-0# +5u$\n", -6);


	return (0);
}
