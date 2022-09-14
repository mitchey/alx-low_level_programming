#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character to check
 * Return: 1 (is a letter), 0 (otherwise)
 */

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 'a'; i < 'z'; i++)
	{
		for (j = 'A'; J < 'Z'; j++)
		{
			if (c == i || c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}
