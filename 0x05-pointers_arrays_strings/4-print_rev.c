#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: params
 */

void print_rev(char *s)
{
	int i = sizeof(*s);
	int j = 1;

	while (j <= i)
	{
		_putchar(s[-j]);
		j++;
	}
	_putchar('\n');
}
