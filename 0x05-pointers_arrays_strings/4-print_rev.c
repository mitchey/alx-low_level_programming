#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: params
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	
	while (j <= i)
	{
		_putchar(s[-j]);
		j--;
	}
	_putchar('\n');
}
