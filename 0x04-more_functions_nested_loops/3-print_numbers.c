#include "main.h"

/**
 * print_numbers - print 0 - 9 
 * Return: always 0
 */

void print_numbers(void)
{
	char i;

	for (i = '1'; i <= '9'; i++)
	{
		_putchar (i);
		_putchar ('\n');
	}
	return (0);
}
