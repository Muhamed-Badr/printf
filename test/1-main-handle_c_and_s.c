#include "../main.h"

int main(void)
{
	char *str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor \
sit amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. \
Nunc interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi \
bibendum porta ligula, ut eleifend mi feugiat non. Integer hendrerit \
vitae dolor facilisis blandit. Duis vel luctus dolor, vel accumsan \
massa. Donec dapibus pellentesque porttitor. Nulla lobortis non lacus a \
fermentum. Morbi volutpat massa at massa interdum fringilla. Cras eu \
vehicula enim, eget pharetra ligula. Morbi ut lacus at lectus pulvinar \
dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor \
tortor ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis \
ornare urna posuere, vel consectetur orci aliquet. Pellentesque \
placerat venenatis augue, eget aliquam lorem hendrerit ut. Sed blandit \
magna a elit mattis laoreet. Quisque nec quam nisi. Ut faucibus \
justo.I'm exist after 1024 byte :)\n";
	char *str2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor \
sit amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. \
Nunc interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi \
bibendum porta ligula, ut eleifend mi feugiat non. Integer hendrerit \
vitae dolor facilisis blandit. Duis vel luctus dolor, vel accumsan \
massa. Donec dapibus pellentesque porttitor. Nulla lobortis non lacus a \
fermentum. Morbi volutpat massa at massa interdum fringilla. Cras eu \
vehicula enim, eget pharetra ligula. Morbi ut lacus at lectus pulvinar \
dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor \
tortor ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis \
ornare urna posuere, vel consectetur orci aliquet. Pellentesque \
placerat venenatis augue, eget aliquam lorem hendrerit ut. Sed blandit \
magna a elit mattis laoreet. Quisque nec quam nisi. Ut faucibus \
justo.Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor \
sit amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. \
Nunc interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi \
bibendum porta ligula, ut eleifend mi feugiat non. Integer hendrerit \
vitae dolor facilisis blandit. Duis vel luctus dolor, vel accumsan \
massa. Donec dapibus pellentesque porttitor. Nulla lobortis non lacus a \
fermentum. Morbi volutpat massa at massa interdum fringilla. Cras eu \
vehicula enim, eget pharetra ligula. Morbi ut lacus at lectus pulvinar \
dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor \
tortor ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis \
ornare urna posuere, vel consectetur orci aliquet. Pellentesque \
placerat venenatis augue, eget aliquam lorem hendrerit ut. Sed blandit \
magna a elit mattis laoreet. Quisque nec quam nisi. Ut faucibus \
justo.Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor \
sit amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. \
Nunc interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi \
bibendum porta ligula, ut eleifend mi feugiat non. Integer hendrerit \
vitae dolor facilisis blandit. Duis vel luctus dolor, vel accumsan \
massa. Donec dapibus pellentesque porttitor. Nulla lobortis non lacus a \
fermentum. Morbi volutpat massa at massa interdum fringilla. Cras eu \
vehicula enim, eget pharetra ligula. Morbi ut lacus at lectus pulvinar \
dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor \
tortor ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis \
ornare urna posuere, vel consectetur orci aliquet. Pellentesque \
placerat venenatis augue, eget aliquam lorem hendrerit ut. Sed blandit \
magna a elit mattis laoreet. Quisque nec quam nisi. Ut faucibus \
justo.Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor \
sit amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. \
Nunc interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi \
bibendum porta ligula, ut eleifend mi feugiat non. Integer hendrerit \
vitae dolor facilisis blandit. Duis vel luctus dolor, vel accumsan \
massa. Donec dapibus pellentesque porttitor. Nulla lobortis non lacus a \
fermentum. Morbi volutpat massa at massa interdum fringilla. Cras eu \
vehicula enim, eget pharetra ligula. Morbi ut lacus at lectus pulvinar \
dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor \
tortor ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis \
ornare urna posuere, vel consectetur orci aliquet. Pellentesque \
placerat venenatis augue, eget aliquam lorem hendrerit ut. Sed blandit \
magna a elit mattis laoreet. Quisque nec quam nisi. Ut faucibus \
justo.I'm exist after 4096 byte :)\n";

	int n;

	puts("[My `_printf`]");
	puts("=========");

	n = _printf("Let's print a simple sentence.\n");
	printf("n: %d\n", n);
	n = _printf("%c", 'S');
	printf("n: %d\n", n);
	n = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("n: %d\n", n);
	n = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("n: %d\n", n);
	n = _printf("%s", "This sentence is retrieved from va_args!\n");
	printf("n: %d\n", n);
	n = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("n: %d\n", n);
	n = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("n: %d\n", n);
	n = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("n: %d\n", n);
	n = _printf("%%");
	printf("n: %d\n", n);
	n = _printf("Should print a single percent sign: %%\n");
	printf("n: %d\n", n);
	n = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("n: %d\n", n);
	n = _printf("css%ccs%scscscs", 'T', "Test");
	printf("n: %d\n", n);
	n = _printf(str1); /* where `str1` is a big string */
	printf("n: %d\n", n);
	n = _printf("man gcc:\n%s", str2); /* where `str2` is a big string */
	printf("n: %d\n", n);
	n = _printf(NULL);
	printf("n: %d\n", n);
	n = _printf("%c", '\0');
	printf("n: %d\n", n);
	n = _printf("%");
	printf("n: %d\n", n);
	n = _printf("%!\n");
	printf("n: %d\n", n);
	n = _printf("%K\n");
	printf("n: %d\n", n);


	printf("==============================================\n");

	puts("[The C `printf`]");
	puts("=========");

	n = printf("Let's print a simple sentence.\n");
	printf("n: %d\n", n);
	n = printf("%c", 'S');
	printf("n: %d\n", n);
	n = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("n: %d\n", n);
	n = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("n: %d\n", n);
	n = printf("%s", "This sentence is retrieved from va_args!\n");
	printf("n: %d\n", n);
	n = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("n: %d\n", n);
	n = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("n: %d\n", n);
	n = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("n: %d\n", n);
	n = printf("%%");
	printf("n: %d\n", n);
	n = printf("Should print a single percent sign: %%\n");
	printf("n: %d\n", n);
	n = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("n: %d\n", n);
	n = printf("css%ccs%scscscs", 'T', "Test");
	printf("n: %d\n", n);
	n = printf(str1); /* where `str1` is a big string */
	printf("n: %d\n", n);
	n = printf("man gcc:\n%s", str2); /* where `str2` is a big string */
	printf("n: %d\n", n);
	n = printf(NULL);
	printf("n: %d\n", n);
	n = printf("%c", '\0');
	printf("n: %d\n", n);
	n = printf("%");
	printf("n: %d\n", n);
	n = printf("%!\n");
	printf("n: %d\n", n);
	n = printf("%K\n");
	printf("n: %d\n", n);


	return (0);
}
