#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point (prints a line of text to standard error)
 * Return: 1 (successful)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}