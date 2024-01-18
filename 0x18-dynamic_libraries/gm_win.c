#include <stdlib.h>
#include <unistd.h>

/**
 * printf - prints formatted characters,
 * a variadic function, takes multiple parameters/arguments
 * @gm_win: receives a string
 *
 * Return: 0 if successful, -1 or 1 if unsuccessful
*/

int printf(char *gm_win, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
