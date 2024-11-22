#include "../../main.h"

int main(void)
{
	/*
	 * %o
	 *
	 * 1. (' ' -> X)
	 * 2. ('+' -> X)
	 * 3. ('-' -> √)
	 * 4. ('0' -> √)
	 * 5. ('#' -> √)
	 * 6. (width -> √)
	 * 7. (precision -> √)
	 */
	/*
	 * Uncomment the below comment when you try to test your own `_printf`,
	 *  and compare its results with the C `printf` results.
	 */
	/**/
	_printf("My _printf\n");
	_printf("=========\n");

	_printf("00.n:123456789\n");
	_printf("01.n:%o$\n", 6);
	_printf("02.n:%o$\n", -6);
	_printf("03.n:%0o$\n", 6);
	_printf("04.n:%0o$\n", -6);
	_printf("05.n:%1o$\n", 6);
	_printf("06.n:%1o$\n", -6);
	_printf("07.n:%2o$\n", 6);
	_printf("08.n:%2o$\n", -6);
	_printf("09.n:%+2o$\n", 6);
	_printf("10.n:%+2o$\n", -6);
	_printf("11.n:%5o$\n", 6);
	_printf("12.n:%5o$\n", -6);
	_printf("13.n:%+5o$\n", 6);
	_printf("14.n:%+5o$\n", -6);
	_printf("15.n:%05o$\n", 6);
	_printf("16.n:%05o$\n", -6);
	_printf("17.n:%+05o$\n", 6);
	_printf("18.n:%+05o$\n", -6);
	_printf("19.n:% o$\n", 6);
	_printf("20.n:% o$\n", -6);
	_printf("21.n:%0 5o$\n", -6);
	_printf("22.n:%0 5o$\n", 6);
	_printf("23.n:%0 +5o$\n", 6);
	_printf("24.n:%# +5o$\n", 6);
	_printf("25.n:%# +5o$\n", -6);
	_printf("26.n:%0# +5o$\n", 6);
	_printf("27.n:%0# +5o$\n", -6);
	_printf("=========\n");
	_printf("01.n:%-o$\n", 6);
	_printf("02.n:%-o$\n", -6);
	_printf("03.n:%-0o$\n", 6);
	_printf("04.n:%-0o$\n", -6);
	_printf("05.n:%-1o$\n", 6);
	_printf("06.n:%-1o$\n", -6);
	_printf("07.n:%-2o$\n", 6);
	_printf("08.n:%-2o$\n", -6);
	_printf("09.n:%-+2o$\n", 6);
	_printf("10.n:%-+2o$\n", -6);
	_printf("11.n:%-5o$\n", 6);
	_printf("12.n:%-5o$\n", -6);
	_printf("13.n:%-+5o$\n", 6);
	_printf("14.n:%-+5o$\n", -6);
	_printf("15.n:%-05o$\n", 6);
	_printf("16.n:%-05o$\n", -6);
	_printf("17.n:%-+05o$\n", 6);
	_printf("18.n:%-+05o$\n", -6);
	_printf("19.n:%- o$\n", 6);
	_printf("20.n:%- o$\n", -6);
	_printf("21.n:%-0 5o$\n", -6);
	_printf("22.n:%-0 5o$\n", 6);
	_printf("23.n:%-0 +5o$\n", 6);
	_printf("24.n:%-# +5o$\n", 6);
	_printf("25.n:%-# +5o$\n", -6);
	_printf("26.n:%-0# +5o$\n", 6);
	_printf("27.n:%-0# +5o$\n", -6);


	printf("==============================================\n");

	printf("The C printf\n");
	printf("=========\n");

	printf("00.n:123456789\n");
	printf("01.n:%o$\n", 6);
	printf("02.n:%o$\n", -6);
	printf("03.n:%0o$\n", 6);
	printf("04.n:%0o$\n", -6);
	printf("05.n:%1o$\n", 6);
	printf("06.n:%1o$\n", -6);
	printf("07.n:%2o$\n", 6);
	printf("08.n:%2o$\n", -6);
	printf("09.n:%+2o$\n", 6);
	printf("10.n:%+2o$\n", -6);
	printf("11.n:%5o$\n", 6);
	printf("12.n:%5o$\n", -6);
	printf("13.n:%+5o$\n", 6);
	printf("14.n:%+5o$\n", -6);
	printf("15.n:%05o$\n", 6);
	printf("16.n:%05o$\n", -6);
	printf("17.n:%+05o$\n", 6);
	printf("18.n:%+05o$\n", -6);
	printf("19.n:% o$\n", 6);
	printf("20.n:% o$\n", -6);
	printf("21.n:%0 5o$\n", -6);
	printf("22.n:%0 5o$\n", 6);
	printf("23.n:%0 +5o$\n", 6);
	printf("24.n:%# +5o$\n", 6);
	printf("25.n:%# +5o$\n", -6);
	printf("26.n:%0# +5o$\n", 6);
	printf("27.n:%0# +5o$\n", -6);
	printf("=========\n");
	printf("01.n:%-o$\n", 6);
	printf("02.n:%-o$\n", -6);
	printf("03.n:%-0o$\n", 6);
	printf("04.n:%-0o$\n", -6);
	printf("05.n:%-1o$\n", 6);
	printf("06.n:%-1o$\n", -6);
	printf("07.n:%-2o$\n", 6);
	printf("08.n:%-2o$\n", -6);
	printf("09.n:%-+2o$\n", 6);
	printf("10.n:%-+2o$\n", -6);
	printf("11.n:%-5o$\n", 6);
	printf("12.n:%-5o$\n", -6);
	printf("13.n:%-+5o$\n", 6);
	printf("14.n:%-+5o$\n", -6);
	printf("15.n:%-05o$\n", 6);
	printf("16.n:%-05o$\n", -6);
	printf("17.n:%-+05o$\n", 6);
	printf("18.n:%-+05o$\n", -6);
	printf("19.n:%- o$\n", 6);
	printf("20.n:%- o$\n", -6);
	printf("21.n:%-0 5o$\n", -6);
	printf("22.n:%-0 5o$\n", 6);
	printf("23.n:%-0 +5o$\n", 6);
	printf("24.n:%-# +5o$\n", 6);
	printf("25.n:%-# +5o$\n", -6);
	printf("26.n:%-0# +5o$\n", 6);
	printf("27.n:%-0# +5o$\n", -6);


	return (0);
}
