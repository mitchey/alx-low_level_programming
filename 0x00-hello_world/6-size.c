#include <stdio.h>
/**
 * main - entry point for program
 *
 * Returns: always zero
 */

int main(void)
{
	printf("char size: %ld byte(s)\n", sizeof(char));
	printf("int size: %ld byte(s)\n", sizeof(int));
	printf("long int size: %ld byte(s)\n", sizeof(long int));
	printf("long long int size: %ld byte(s)\n", sizeof(long long int));
	printf("float size: %ld bytes(s)\n", sizeof(float));
	return (0);
}
