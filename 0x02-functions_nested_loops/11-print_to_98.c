#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that checks the value of an integer and print all natural numbers
 * from n to 98 followed by a new line.
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
}
