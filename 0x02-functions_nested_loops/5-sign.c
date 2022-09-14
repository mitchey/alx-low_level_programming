#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number to check
 * Return: 1 (positive), 0 (zero), -1 (negative)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}

	return (0);
	_putchar('0');
}	
