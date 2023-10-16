#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string inputed to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, n, x;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		x = len / 2;
		while (str[x] != '\0')
		{
			_putchar(str[x]);
			x++;
		}
	} else
	{
		n = (len - 1) / 2;
		while (n < len - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
