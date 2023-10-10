#include "main.h"

/**
 * print_times_table - prints the 'n' times table, starting with 0.
 * @n: number of times_table to print
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				z = x * y;
				if (x == 0)
				{
					_putchar(z + '0');
				} else if (z < 10 && x != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				} else if (z >= 10 && z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				} else if (z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
