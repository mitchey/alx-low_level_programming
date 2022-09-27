#include "main.h"

/**
 * _memcpy - copy number bytes from address "from" to address "to"
 * @dest: content to be copied
 * @src: source of data to be copied
 * @n: bytes of the memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n) /*Declaring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;
	} /*end WHILE*/

	return (dest);
}
