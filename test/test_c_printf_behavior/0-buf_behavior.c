#include <stdio.h>
#include <limits.h>
#include "../../main.h"

/**
 * main - Entry point
 *
 * Description: This program study the c functions buffering behavior.
 *
 * -> NOTE: i can't implement this buffering behavior in my `_printf`
 *           because i can't make a shared buffer (buffer shared for
 *           all calls of my `_printf` function in one program)
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
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
justo.I'm exist after 1024 byte :)";
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
justo.I'm exist after 4096 byte :)";

	if (argc != 2)
	{
		printf("Usage: %s <test_number>.\n", *argv);
		printf("[*]test number:\n");
		printf("    [01] str < 1024.\n");
		printf("    [02] str < 1024 && end by '\\n'.\n");
		printf("    [03] str > 1024.\n");
		printf("    [04] str > 1024 && end by '\\n'.\n");
		printf("    [05] str = 1024.\n");
		printf("    [06] str = 1024 && end by '\\n'.\n");
		printf("    [07] str > 4096.\n");
		printf("    [08] str > 4096 && end by '\\n'.\n");
		return (1);
	}


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '1')
	   printf("hello");
	/*
	 * str < 1024
	 * -> with/without redirecting/piping:
	 *     string will appear at the end of output (_IOFBF).
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '2')
	   printf("hello\n");
	/*
	 * str < 1024 && end by '\n'
	 * -> with redirecting/piping:
	 *     string will appear at the end of output (_IOFBF).
	 * -> without redirecting/piping:
	 *     string will appear in output like it exist in code (_IOLBF).
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '3')
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
justo.\nI'm exist after 1024 byte :)");
	/* 
	 * str > 1024
	 * -> without redirecting/piping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes will appear at the end
	 *     of output (_IOFBF).
	 * -> with redirecting/piping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '4')
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
	/* 
	 * str > 1024 && end by '\n'
	 * -> without redirecting/piping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes also will appear in output
	 *     like it exist in code (_IOLBF).
	 * -> with redirecting/piping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '5')
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
	/*
	 * str = 1024
	 * -> without redirecting/piping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF).
	 * -> with redirecting/piping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '6')
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
	/*
	 * str = 1024 && end by '\n' ### not tested ###
	 * -> without redirecting/piping:
	 * -> with redirecting/piping:
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '7')
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
justo.I'm exist after 4096 byte :)");
	/* 
	 * str > 4096
	 * -> without redirecting/piping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes will appear at the end
	 *     of output (_IOFBF).
	 * -> with redirecting/piping:
	 *     string will appear at the end of output (_IOFBF). ###neeed search###
	 */


	/*========================================================*/
	/*
	 */
	if (argv[1][0] == '8')
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
	/* 
	 * str > 4096 && end by '\n'
	 * -> without redirecting/piping:
	 *     first 1024 bytes of string will appear in output like it exist
	 *     in code (_IOFBF), and the remaining bytes also will appear in output
	 *     like it exist in code (_IOLBF).
	 * -> with redirecting/piping:
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
	 */
	/*
	 * ### not tested ###
	 * str > 4096 && embedded in / combined with it (`%d`, and `\n`)
	 * -> without redirecting/piping:
	 * -> with redirecting/piping:
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
justo.I'm\n exist after 4096 byte :)\n", 2048);
	 */
	/*
	 * ### not tested ###
	 * str > 4096 && embedded in / combined with it (`%d`, and `\n`) &&
	 *  end by '\n'
	 * -> without redirecting/piping:
	 * -> with redirecting/piping:
	 */


	/*========================================================*/
	/*
	 * try to point to all of the previously tested strings by
	 *  a pointer of char such as {`char *str`}, then use it instead,
	 *  e.g. {`printf("%s", str);`} (the result will be same).
	 */


	/*========================================================*/
	/*
	 * try to test your own `_printf` with all of the previously tested strings
	 *  to show if it able to handle strings like C `printf` or not.
	 *
	 * -> NOTE: don't try to test the buffering behavior of the C functions
	 *           with your `_printf`, because we said previously we don't
	 *           use a shared buffer.
	 */


	/*========================================================*/
	/*
	 * try to call {the C (`printf`, `puts`, or both) with your `_printf`}
	 *  in two cases (with/without redirecting/piping), you will see that
	 *  the output order will be different (will not be the same of the order
	 *  of functions call in some cases).
	 *
	 * -> NOTE: try `./compiled_file | cat` command to see the behavior when
	 *           redirecting/piping.
	 */
	/* such as */
	/*
	 printf("the C printf\n");
	 _printf("my _printf\n");
	 */
	/*
	 _printf("my _printf\n");
	 printf("the C printf\n");
	 */
	/*
	 printf("the C printf");
	 _printf("my _printf\n");
	 */
	/*
	 puts("the C puts");
	 _printf("my _printf\n");
	 */
	/*
	 _printf("my _printf\n");
	 puts("the C puts");
	 */
	/*
	 printf("the C printf\n");
	 puts("the C puts");
	 _printf("my _printf\n");
	 */
	/*
	 .
	 .
	 .
	 */


	/*========================================================*/
	/*
	n = _strlen(str1);
	printf("str1_len: %d\n", n);
	n = _strlen(str2);
	printf("str2_len: %d\n", n);
	 */


	return (0);
}
