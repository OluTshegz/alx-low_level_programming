#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long x = 1, y = 2, sum;

	printf("%lu, %lu", x, y);
	for (i = 0; i < 48; i++)
	{
		sum = x + y;
		printf(", %lu", sum);
		x = y;
		y = sum;
	}
	printf("\n");

	return (0);
}
