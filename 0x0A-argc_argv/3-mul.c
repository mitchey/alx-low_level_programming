#include <stdio.h>
#include <stdlib.h>

/**
 * main - function for multiplication
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int mul, a, b;

	/*check argument count*/
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		mul = a * b;

		printf("%i\n", mul);

		return (0);
	}

	/*if two arguments were not received*/
	printf("Error\n");

	return (1);
}
