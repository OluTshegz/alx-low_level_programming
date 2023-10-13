#include "main.h"

/**
 * print_number - prints an integer, not allowed to use long,
 * arrays or pointers, hard-code special values
 * @n: input integer parameter to be printed
 * Return: void
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar((i % 10) + '0');
}
