#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 - 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0;  j < 15; j++)
		{
			_putchar (j);
		}
		_putchar ('\n');
	}
	_putchar ('\n');
}
