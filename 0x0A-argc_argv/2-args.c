#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the progrm
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}
