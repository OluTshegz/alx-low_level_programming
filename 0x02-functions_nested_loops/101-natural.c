#include <stdio.h>

/**
 * main - sum the list of the multiples of 3 and 5 below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
	int x = 0, sum = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0 || x % 5 == 0))
			sum += x;
		x++;
	}

	printf("%d\n", sum);

	return (0);
}
