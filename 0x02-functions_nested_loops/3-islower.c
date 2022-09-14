#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: always 1 (lowercase), 0 (otherwise)
 */

int _islower(int c)
{
	int letter, i;

	letter = c;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (letter == i)
		{
			return (1);
		}
	}

	return (0);
}
