#include <stdio.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, x;

	i = 612852475143;

	for (x = 2; x <= i; x++)
	{
		if (i % x == 0)
		{
			i /= x;
			x--;
		}
	}
	printf("%lu\n", x);

	return (0);
}
