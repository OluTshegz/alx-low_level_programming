#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int x;

		for (x = 0; x < 15; x++)
		{
			if (x >= 10)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}

		_putchar('\n');
		i++;
	}
}
