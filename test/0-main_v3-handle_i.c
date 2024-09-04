#include <stdio.h>
#include <limits.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int l;
	int n;
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
justo.I'm exist after 1024 byte :)",
		 *str2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm\n exist after 4096 byte :)";


	n = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.\n%d\nLorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm\n exist after 4096 byte :)", 2048);
	_printf("n: %d\n", n);

	/*
	   printf("%s", str2);
	 */
	
	/*
	   puts("[My `_printf`]");
	   puts("=========");
	 */

	/*========================================================*/
	/*
	   printf("hello");
	 */
	/*
	 * str < 1024
	 * -> with/without redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF).
	 */

	/*========================================================*/
	/*
	   printf("hello\n");
	 */
	/*
	 * str < 1024 && end by '\n'
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF).
	 * -> without redirecting/pipping:
	 *     string will appear in output like it exist in code (_IOLBF).
	 */

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm exist after 1024 byte :)");
	 */
	/* 
	 * str > 1024
	 * -> without redirecting/pipping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes will appear at the end
	 *     of output (_IOFBF).
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm exist after 1024 byte :)\n");
	 */
	/* 
	 * str > 1024 && end by '\n'
	 * -> without redirecting/pipping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes also will appear in output
	 *     like it exist in code (_IOLBF).
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.");
	 */
	/* 
	 * str = 1024
	 * -> without redirecting/pipping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF).
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo\n");
	 */ /* str = 1024 && end by '\n'*/

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm\n exist after 4096 byte :)");
	 */
	/* 
	 * str > 4096
	 * -> without redirecting/pipping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes will appear at the end
	 *     of output (_IOFBF).
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */

	/*========================================================*/
	/*
	   printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. \
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
justo.I'm exist after 4096 byte :)\n");
	 */
	/* 
	 * str > 4096 && end by '\n'
	 * -> without redirecting/pipping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes also will appear in output
	 *     like it exist in code (_IOLBF).
	 * -> with redirecting/pipping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */


	/*
	n = _strlen(str1);
	_printf("str_len: %d\n", n);
	 */
	n = _printf("%d\n", 1024);
	_printf("n: %d\n", n);
	n = _printf("%d\n", -1024);
	_printf("n: %d\n", n);
	n = _printf("%d\n", 0);
	_printf("n: %d\n", n);
	n = _printf("%d\n", INT_MAX);
	_printf("n: %d\n", n);
	n = _printf("%d\n", INT_MIN);
	_printf("n: %d\n", n);
	l = INT_MAX + 1024;
	n = _printf("%d\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	_printf("n: %d\n", n);
	l = INT_MAX - 1024;
	n = _printf("%d\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	_printf("n: %d\n", n);
	n = _printf("There is %d bytes in %d KB\n", 1024, 1);
	_printf("n: %d\n", n);
	n = _printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("n: %d\n", n);
	n = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("n: %d\n", n);
	n = _printf("%i\n", 1024);
	_printf("n: %d\n", n);
	n = _printf("%i\n", -1024);
	_printf("n: %d\n", n);
	n = _printf("%i\n", 0);
	_printf("n: %d\n", n);
	n = _printf("%i\n", INT_MAX);
	_printf("n: %d\n", n);
	n = _printf("%i\n", INT_MIN);
	_printf("n: %d\n", n);
	l = INT_MAX + 1024;
	n = _printf("%i\n", l); /* where l is a long int equals to INT_MIN + 1024 */
	_printf("n: %d\n", n);
	l = INT_MAX - 1024;
	n = _printf("%i\n", l); /* where l is a long int equals to INT_MIN - 1024 */
	_printf("n: %d\n", n);
	n = _printf("There is %i bytes in %i KB\n", 1024, 1);
	_printf("n: %d\n", n);
	n = _printf("%i - %i = %i\n", 1024, 2048, -1024);
	_printf("n: %d\n", n);
	n = _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("n: %d\n", n);
	n = _printf("%d == %i\n", 1024, 1024);
	_printf("n: %d\n", n);
	n = _printf("iddi%diddiiddi\n", 1024);
	_printf("n: %d\n", n);
	n = _printf("%d\n", 10000);
	_printf("n: %d\n", n);
	n = _printf("%i\n", 10000);
	_printf("n: %d\n", n);

	/*
	   puts("[My `_printf`]");
	   puts("=========");
	 */

	return (0);
}
