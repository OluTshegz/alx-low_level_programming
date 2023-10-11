#include "main.h"

/**
 * largest_number - returned the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_numbers(int a, int b, int c)
{
	int largest;
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest  = c;
	}

	return (largest);
}
