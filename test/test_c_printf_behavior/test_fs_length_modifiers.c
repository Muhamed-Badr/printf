#include "../../main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - entry point.
 *
 * Description: This program explores the difference between data types.
 *               Also, how the C `printf` function handles them
 *               by using length modifiers:
 *               -> e.g.
 *                  - short short -> `hh`.
 *                  - short       -> `h`.
 *                  - long        -> `l`.
 *                  - long long   -> `ll`.
 *
 * NOTE:
 *       [1] If the variable value = `-1`, this indicates a data type
 *            overflow happens.
 *       [2] The length modifiers (`hh`, `ll`) unrecognized in my `_printf`.
 *
 * Return: 0 (Always success).
 */

int main(void)
{
	/* 
	 * The below 2 lines are not correct (there is no data type `short short`)
	 *  but they equivalent in meaning/size to data type `char`(1 Byte/8 bits).
	 *
	 * ```
	 * short short ss = CHAR_MAX;
	 * short short int ssi = CHAR_MAX;
	 * ```
	 */
	char c = CHAR_MAX;
	short s = SHRT_MAX;
	short int si = SHRT_MAX;
	int i  = INT_MAX;
	long l = LONG_MAX;
	long int li = LONG_MAX;
	long long ll = LONG_MAX;
	long long int lli = LONG_MAX;


	printf("[+]===[sizeof(data_type)]================\n");
	printf("   [01].sizeof(char): %d\n", sizeof(char));
	printf("   [02].sizeof(short): %d\n", sizeof(short));
	printf("   [03].sizeof(short int): %d\n", sizeof(short int));
	printf("   [04].sizeof(int): %d\n", sizeof(int));
	printf("   [05].sizeof(long): %d\n", sizeof(long));
	printf("   [06].sizeof(long int): %d\n", sizeof(long int));
	printf("   [07].sizeof(long long): %d\n", sizeof(long long));
	printf("   [08].sizeof(long long int): %d\n", sizeof(long long int));


	printf("[+]===[sizeof(variable)]=================\n");
	printf("   [01].sizeof(c): %d\n", sizeof(c));
	printf("   [02].sizeof(s): %d\n", sizeof(s));
	printf("   [03].sizeof(si): %d\n", sizeof(si));
	printf("   [04].sizeof(i): %d\n", sizeof(i));
	printf("   [05].sizeof(l): %d\n", sizeof(l));
	printf("   [06].sizeof(li): %d\n", sizeof(li));
	printf("   [07].sizeof(ll): %d\n", sizeof(ll));
	printf("   [08].sizeof(lli): %d\n", sizeof(lli));


	printf("==============================================\n");

	printf("The C printf\n");
	printf("=========\n");

	printf("[+]===[valueof(variable)]================\n");
	printf("   [01].value(c): %d\n", c);
	printf("   [02].value(s): %hd\n", s);
	printf("   [03].value(si): %hd\n", si);
	printf("   [04].value(i): %d\n", i);
	printf("   [05].value(l): %ld\n", l);
	printf("   [06].value(li): %ld\n", li);
	printf("   [07].value(ll): %ld\n", ll);
	printf("   [08].value(lli): %ld\n", lli);


	printf("[+]===[valueof(variable)] - [%%hhd]======\n");
	printf("   [01].value(c): %hhd\n", c);
	printf("   [02].value(s): %hhd\n", s);
	printf("   [03].value(si): %hhd\n", si);
	printf("   [04].value(i): %hhd\n", i);
	printf("   [05].value(l): %hhd\n", l);
	printf("   [06].value(li): %hhd\n", li);
	printf("   [07].value(ll): %hhd\n", ll);
	printf("   [08].value(lli): %hhd\n", lli);


	printf("[+]===[valueof(variable)] - [%%hd]=======\n");
	printf("   [01].value(c): %hd\n", c);
	printf("   [02].value(s): %hd\n", s);
	printf("   [03].value(si): %hd\n", si);
	printf("   [04].value(i): %hd\n", i);
	printf("   [05].value(l): %hd\n", l);
	printf("   [06].value(li): %hd\n", li);
	printf("   [07].value(ll): %hd\n", ll);
	printf("   [08].value(lli): %hd\n", lli);


	printf("[+]===[valueof(variable)] - [%%d]========\n");
	printf("   [01].value(c): %d\n", c);
	printf("   [02].value(s): %d\n", s);
	printf("   [03].value(si): %d\n", si);
	printf("   [04].value(i): %d\n", i);
	printf("   [05].value(l): %d\n", l);
	printf("   [06].value(li): %d\n", li);
	printf("   [07].value(ll): %d\n", ll);
	printf("   [08].value(lli): %d\n", lli);


	printf("[+]===[valueof(variable)] - [%%ld]=======\n");
	printf("   [01].value(c): %ld\n", c);
	printf("   [02].value(s): %ld\n", s);
	printf("   [03].value(si): %ld\n", si);
	printf("   [04].value(i): %ld\n", i);
	printf("   [05].value(l): %ld\n", l);
	printf("   [06].value(li): %ld\n", li);
	printf("   [07].value(ll): %ld\n", ll);
	printf("   [08].value(lli): %ld\n", lli);


	printf("[+]===[valueof(variable)] - [%%lld]======\n");
	printf("   [01].value(c): %lld\n", c);
	printf("   [02].value(s): %lld\n", s);
	printf("   [03].value(si): %lld\n", si);
	printf("   [04].value(i): %lld\n", i);
	printf("   [05].value(l): %lld\n", l);
	printf("   [06].value(li): %lld\n", li);
	printf("   [07].value(ll): %lld\n", ll);
	printf("   [08].value(lli): %lld\n", lli);


	printf("==============================================\n");

	/*
	 * Uncomment the below comment when you try to test your own `_printf`,
	 *  and compare its results with the C `printf` results.
	 */
	/**/
	_printf("My _printf\n");
	_printf("=========\n");

	_printf("[+]===[valueof(variable)]================\n");
	_printf("   [01].value(c): %d\n", c);
	_printf("   [02].value(s): %hd\n", s);
	_printf("   [03].value(si): %hd\n", si);
	_printf("   [04].value(i): %d\n", i);
	_printf("   [05].value(l): %ld\n", l);
	_printf("   [06].value(li): %ld\n", li);
	_printf("   [07].value(ll): %ld\n", ll);
	_printf("   [08].value(lli): %ld\n", lli);


	_printf("[+]===[valueof(variable)] - [%%hhd]======\n");
	_printf("   [01].value(c): %hhd\n", c);
	_printf("   [02].value(s): %hhd\n", s);
	_printf("   [03].value(si): %hhd\n", si);
	_printf("   [04].value(i): %hhd\n", i);
	_printf("   [05].value(l): %hhd\n", l);
	_printf("   [06].value(li): %hhd\n", li);
	_printf("   [07].value(ll): %hhd\n", ll);
	_printf("   [08].value(lli): %hhd\n", lli);


	_printf("[+]===[valueof(variable)] - [%%hd]=======\n");
	_printf("   [01].value(c): %hd\n", c);
	_printf("   [02].value(s): %hd\n", s);
	_printf("   [03].value(si): %hd\n", si);
	_printf("   [04].value(i): %hd\n", i);
	_printf("   [05].value(l): %hd\n", l);
	_printf("   [06].value(li): %hd\n", li);
	_printf("   [07].value(ll): %hd\n", ll);
	_printf("   [08].value(lli): %hd\n", lli);


	_printf("[+]===[valueof(variable)] - [%%d]========\n");
	_printf("   [01].value(c): %d\n", c);
	_printf("   [02].value(s): %d\n", s);
	_printf("   [03].value(si): %d\n", si);
	_printf("   [04].value(i): %d\n", i);
	_printf("   [05].value(l): %d\n", l);
	_printf("   [06].value(li): %d\n", li);
	_printf("   [07].value(ll): %d\n", ll);
	_printf("   [08].value(lli): %d\n", lli);


	_printf("[+]===[valueof(variable)] - [%%ld]=======\n");
	_printf("   [01].value(c): %ld\n", c);
	_printf("   [02].value(s): %ld\n", s);
	_printf("   [03].value(si): %ld\n", si);
	_printf("   [04].value(i): %ld\n", i);
	_printf("   [05].value(l): %ld\n", l);
	_printf("   [06].value(li): %ld\n", li);
	_printf("   [07].value(ll): %ld\n", ll);
	_printf("   [08].value(lli): %ld\n", lli);


	_printf("[+]===[valueof(variable)] - [%%lld]======\n");
	_printf("   [01].value(c): %lld\n", c);
	_printf("   [02].value(s): %lld\n", s);
	_printf("   [03].value(si): %lld\n", si);
	_printf("   [04].value(i): %lld\n", i);
	_printf("   [05].value(l): %lld\n", l);
	_printf("   [06].value(li): %lld\n", li);
	_printf("   [07].value(ll): %lld\n", ll);
	_printf("   [08].value(lli): %lld\n", lli);


	return (0);
}
