#include <stdio.h>

/**
 * main - code that prints the alphs in lowercase, and then in uppercase,
 * only use putchar
 * Return: 0
 */

int main(void)
{
	int l = 'a';
	int up = 'A';
	while (l <= 'z' , '\n')
	{
		putchar(1);
		l += 1;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up += 1;
	}
		putchar('\n');
	return (0);
}
