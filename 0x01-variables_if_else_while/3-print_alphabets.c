#include <stdio.h>

/**
 * main - prints alphabet in lowercase, then uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	putchar ('\n');

	return (0);
}
