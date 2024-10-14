#include "../main.h"

/**
 * main - entry point.
 *
 * Return: 0 (Always success).
 */
int main(void)
{
	int n;
	char *str = "umsan massa. Donec dapibus pellentesque porttitor. Nulla \
lobortis non lacus a fermentum. Morbi volutpat massa at massa interdum \
fringilla. Cras eu vehicula enim, eget pharetra ligula. Morbi ut lacus at \
lectus pulvinar dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor tortor \
ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis ornare urna \
posuere, vel consectetur orci aliquet. Pellentesque placerat venenatis augue, \
eget aliquam lorem hendrerit ut. Sed blandit magna a elit mattis laoreet. \
Quisque nec quam nisi. Ut faucibus justo.I'm exist after 1024 byte :)";


	n = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc%s", str);
	printf("\nn: %d\n", n);


	n = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc%%\
umsan massa. Donec dapibus pellentesque porttitor. Nulla \
lobortis non lacus a fermentum. Morbi volutpat massa at massa interdum \
fringilla. Cras eu vehicula enim, eget pharetra ligula. Morbi ut lacus at \
lectus pulvinar dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor tortor \
ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis ornare urna \
posuere, vel consectetur orci aliquet. Pellentesque placerat venenatis augue, \
eget aliquam lorem hendrerit ut. Sed blandit magna a elit mattis laoreet. \
Quisque nec quam nisi. Ut faucibus justo.I'm exist after 1024 byte :)");
	printf("\nn: %d\n", n);


	n = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..%%\
Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..%%\
Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..");
	printf("\nn: %d\n", n);


	n = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc");
	printf("\nn: %d\n", n);


	puts("=========================================");

	n = printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc%s", str);
	printf("\nn: %d\n", n);


	n = printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc%%\
umsan massa. Donec dapibus pellentesque porttitor. Nulla \
lobortis non lacus a fermentum. Morbi volutpat massa at massa interdum \
fringilla. Cras eu vehicula enim, eget pharetra ligula. Morbi ut lacus at \
lectus pulvinar dictum.Nunc venenatis dolor ac interdum lacinia. Suspendisse \
consectetur mi vel condimentum feugiat. Nulla a orci mattis, auctor tortor \
ullamcorper, ullamcorper magna. Pellentesque pellentesque turpis ornare urna \
posuere, vel consectetur orci aliquet. Pellentesque placerat venenatis augue, \
eget aliquam lorem hendrerit ut. Sed blandit magna a elit mattis laoreet. \
Quisque nec quam nisi. Ut faucibus justo.I'm exist after 1024 byte :)");
	printf("\nn: %d\n", n);


	n = printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..%%\
Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..%%\
Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel accumsan massa. Donec dapibus \
pellentesque porttitor. Nulla lobortis non lacus a fermentum. Morbi volutpat \
massa at massa interdum fringilla. Cras eu vehicula enim, eget pharetra \
ligula. Morbi ut lacus..");
	printf("\nn: %d\n", n);


	n = printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
Mauris sagittis ornare fermentum. Proin mi ligula, tempor sed auctor sit \
amet, consectetur laoreet purus. Phasellus elementum aliquam ipsum. Nunc \
interdum quam dictum, luctus nisi volutpat, elementum lacus. Morbi bibendum \
porta ligula, ut eleifend mi feugiat non. Integer hendrerit vitae dolor \
facilisis blandit. Duis vel luctus dolor, vel acc");
	printf("\nn: %d\n", n);


	return (0);
}
