#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be reversed and printed
 * Return: void
 */

void print_rev(char *s)
{
	int i, n;

	i = 0;

	while (s[i] != '\0')
		i++;

	n = i - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}

	_putchar('\n');
}
