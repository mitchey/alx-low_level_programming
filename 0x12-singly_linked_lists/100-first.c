#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the main function is executed.
 */

void hare(void)
{
	printf("You'r beat! and yet, you muct allow, \n"
			"I bore my house upon my back!\n");
}
