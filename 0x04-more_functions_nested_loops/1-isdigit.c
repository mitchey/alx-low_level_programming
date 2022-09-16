#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: paramter to check
 * Return: always 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
