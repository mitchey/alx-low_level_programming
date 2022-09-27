#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: ponter memory block
 * @b: value to set
 * @n: bytes of memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Declaring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/
	} /*end FOR*/

	return (s);
}
