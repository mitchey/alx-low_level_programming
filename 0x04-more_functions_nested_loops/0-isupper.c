#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to check
 * Return: always 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
