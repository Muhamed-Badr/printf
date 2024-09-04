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
	printf("[d ] `n = INT_MIN;`: %d\t[+] `u_n = n;`    : %u\n", n, u_n);
	printf("[ld] `n = INT_MIN;`: %ld\t[+] `u_n = n;`    : %lu\n", n, u_n);

	n *= (-1);
	u_n *= (-1);
	printf("[d ] `n *= (-1);`  : %d\t[+] `u_n *= (-1);`: %u\n", n, u_n);
	printf("[ld] `n *= (-1);`  : %ld\t[+] `u_n *= (-1);`: %lu\n", n, u_n);

	n += (1);
	u_n += (1);
	printf("[d ] `n += (1);`   : %d\t[+] `u_n += (1)`  : %u\n", n, u_n);
	printf("[ld] `n += (1);`   : %ld\t[+] `u_n += (1)`  : %lu\n", n, u_n);

	n += (-1);
	u_n += (-1);
	printf("[d ] `n += (-1);`  : %d\t[+] `u_n += (-1);`: %u\n", n, u_n);
	printf("[ld] `n += (-1);`  : %ld\t[+] `u_n += (-1);`: %lu\n", n, u_n);

	return (0);
}
