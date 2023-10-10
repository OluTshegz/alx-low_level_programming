#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer to check
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	return (n);
}
