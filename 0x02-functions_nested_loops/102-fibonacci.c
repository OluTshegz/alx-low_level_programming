#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long x = 0, y = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
