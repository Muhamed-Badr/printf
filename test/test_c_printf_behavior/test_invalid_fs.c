#include "../../main.h"
#include <limits.h>

/**
 * run `man 3 printf` to check the documentation of C `printf`
 */

int main(void)
{
	int n, i;

	/*
	 * Uncomment the below comment when you try to test your own `_printf`,
	 *  and compare its results with the C `printf` results.
	 */
	/**/
	_printf("My _printf\n");
	_printf("=========\n");

	i = 0;

	n = printf(NULL);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%        k$\n");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%        d$\n");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%        J$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%        d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%Jd$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%dd$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("  hi %Q$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("  hi %d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6T$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%# 0-6T$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%# 0-6d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6lW$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6ld$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%# 0-6lW$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%# 0-6ld$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6hW$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+# 0-6hd$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-+0 #6hW$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-+0 #6hd$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+0 #6hW$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+0 #6hd$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+###### ++ -  000----6Y$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+###### ++ -  000----6d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%             0-6Y$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%             0-6d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%             0-6-K$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%             0-6-d$\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% ");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%     ");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%!$\n");
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("hello%");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("hello%d\n", 5);
	_printf("%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h hello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h dhello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h-hello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h$hello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h$ hello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%hK$ hello");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%hhhi");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%h0123456789");
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");


	_printf("\n===============================================\n\n");


	_printf("========[invalid specifier]========\n");
	_printf("===[flags + length]================\n");
	n = _printf("% h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	_printf("===[flags + w + length]============\n");
	n = _printf("%6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% 6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%06h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	_printf("===[flags + `.` + length]==========\n");
	n = _printf("%.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% .3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 .3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	_printf("===[flags + w + `.` + length]======\n");
	n = _printf("%6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% 6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%06.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3h", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	_printf("===[flags + w + `.`]===============\n");
	n = _printf("%", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% 6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%06.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	_printf("===[flags + w + `.` + `HELLO`]=====\n");
	n = _printf("%HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% 6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%06.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3HELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3 hELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3$hELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +*.*$hELLO", LONG_MAX, LONG_MAX, 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +9223372036854775807.9223372036854775807$hELLO", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");


	_printf("\n===============================================\n\n");


	_printf("=====[unrecognized specifier]======\n");
	_printf("===[flags + w + `.` + length]======\n");
	n = _printf("%6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% 6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%+6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%06.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%#6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("% +6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%0 +6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +6.3hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +*.*hK", LONG_MAX, LONG_MAX, 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");

	n = _printf("%-#0 +9223372036854775807.9223372036854775807hK", 5);
	_printf("\n%d.n:%d$\n", ++i, n);
	_printf("\t=========\n");



	_printf("\n==============================================\n");
	_printf("      ==================================\n");
	_printf("==============================================\n\n");


	printf("The C printf\n");
	printf("=========\n");

	i = 0;

	n = printf(NULL);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%        k$\n");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%        d$\n");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%        J$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%        d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%Jd$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%dd$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("  hi %Q$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("  hi %d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6T$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%# 0-6T$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%# 0-6d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6lW$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6ld$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%# 0-6lW$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%# 0-6ld$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6hW$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+# 0-6hd$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-+0 #6hW$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-+0 #6hd$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+0 #6hW$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+0 #6hd$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+###### ++ -  000----6Y$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+###### ++ -  000----6d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%             0-6Y$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%             0-6d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%             0-6-K$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%             0-6-d$\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% ");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%     ");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%!$\n");
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("hello%");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("hello%d\n", 5);
	printf("%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h hello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h dhello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h-hello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h$hello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h$ hello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%hK$ hello");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%hhhi");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%h0123456789");
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");


	printf("\n===============================================\n\n");


	printf("========[invalid specifier]========\n");
	printf("===[flags + length]================\n");
	n = printf("% h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	printf("===[flags + w + length]============\n");
	n = printf("%6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% 6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%06h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	printf("===[flags + `.` + length]==========\n");
	n = printf("%.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% .3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 .3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	printf("===[flags + w + `.` + length]======\n");
	n = printf("%6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% 6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%06.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3h", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	printf("===[flags + w + `.`]===============\n");
	n = printf("%", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% 6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%06.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	printf("===[flags + w + `.` + `HELLO`]=====\n");
	n = printf("%HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% 6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%06.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3HELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3 hELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3$hELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +*.*$hELLO", LONG_MAX, LONG_MAX, 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +9223372036854775807.9223372036854775807$hELLO", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");


	printf("\n===============================================\n\n");


	printf("=====[unrecognized specifier]======\n");
	printf("===[flags + w + `.` + length]======\n");
	n = printf("%6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% 6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%+6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%06.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%#6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("% +6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%0 +6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +6.3hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +*.*hK", LONG_MAX, LONG_MAX, 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");

	n = printf("%-#0 +9223372036854775807.9223372036854775807hK", 5);
	printf("\n%d.n:%d$\n", ++i, n);
	printf("\t=========\n");




	return (0);
}
