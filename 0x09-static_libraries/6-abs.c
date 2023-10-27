#include "main.h"

/**
 * _abs - computes and prints the absolute value of an integer
 * @n: integer to be computed and printed
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;
		return (n);
	}

	return (0);
}
