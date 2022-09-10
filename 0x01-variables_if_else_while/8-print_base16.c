#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int n = '0';
	int f = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (f <= 'f')
	{
		putchar(f);
		f++;
	}

	putchar('\n');

	return (0);
}
