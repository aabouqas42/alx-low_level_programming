#include <stdio.h>

/**
 * first - function thats well executed before the main function
 * Return: void no return
 */

void	__attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
