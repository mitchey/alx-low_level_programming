#include <stdio.h>

/**
 * main - function that print its name
 * @argc: count of arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
