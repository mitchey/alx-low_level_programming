#include <stdio.h>

/**
 * main - using putchar and vithout char variables
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar ('\n');

	return (0);

}