#include "main.h"

/**
 * _strspn - locates a character in a string
 * @s: this is the main c string to be scanned
 * @accept: this is the string containing th elist of characters to match in s
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *str1, *str2;
	str1 = s;
	str2 = accept;
	i = 0;

	while (str1[i] != '\0') /*Declaring WHILE*/
	{
		J = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept */
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}
	return (count);
}
