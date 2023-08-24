#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - A function that runs before the main function.
 * It prints a sentence to the standard output.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

