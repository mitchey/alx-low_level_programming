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
		j = 0;

		while (str2[j] != '\0') /*Declaring WHILE *accept */
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;  /*add j+1*/
		}

		if (s[i] != accept[j]) /*if aren't equal*/
		{
			break;
		}

		i++; /*add x+1*/
	}
	return (count); /*return the value of count*/
}
