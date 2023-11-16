#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - prints before the main function is executed.
 *
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
