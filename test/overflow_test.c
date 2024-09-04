#include <stdio.h>
#include <limits.h>
#include <unistd.h>
void print_number(int n);
int _putchar(char c);

int main(void)
{
	char *str;
	int n;
	unsigned int u_n;

	n = INT_MIN;
	u_n = n;
	str = "[+] `n = INT_MIN;`: ";
	write(1, str, _strlen(str));
	print_number(n);
	str = "\t[+] `u_n = n;`    : ";
	write(1, str, _strlen(str));
	print_number(u_n);
	_putchar('\n');

	n *= (-1);
	u_n *= (-1);
	str = "[+] `n *= (-1);`  : ";
	write(1, str, _strlen(str));
	print_number(n);
	str = "\t[+] `u_n *= (-1);`: ";
	write(1, str, _strlen(str));
	print_number(u_n);
	_putchar('\n');

	n += (1);
	u_n += (1);
	str = "[+] `n += (1);`   : ";
	write(1, str, _strlen(str));
	print_number(n);
	str = "\t[+] `u_n += (1)`  : ";
	write(1, str, _strlen(str));
	print_number(u_n);
	_putchar('\n');

	n += (-1);
	u_n += (-1);
	str = "[+] `n += (-1);`  : ";
	write(1, str, _strlen(str));
	print_number(n);
	str = "\t[+] `u_n += (-1);`: ";
	write(1, str, _strlen(str));
	print_number(u_n);
	_putchar('\n');

	return (0);
}
