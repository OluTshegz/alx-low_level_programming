#include "main.h"

/**
 * jack_bauer - prints 24 hours in minutes
 * Return: void
 */

void jack_bauer(void)
{
	int x;

	for (x = 0; x < 24; x++)
	{
		int y;

		for (y = 0; y < 60; y++)
		{
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			_putchar(':');
			_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
			_putchar('\n');
		}
	}
}
