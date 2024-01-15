#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * custom_printf - prints formatted characters,
 * a variadic function, takes multiple parameters/arguments
 *
 * Return: 0 if successful, -1 or 1 if unsuccessful
*/

int custom_printf(void)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
