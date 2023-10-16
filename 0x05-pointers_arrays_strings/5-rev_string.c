#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int x, y;
	char c;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x / 2; y++)
	{
		c = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = c;
	}
}
