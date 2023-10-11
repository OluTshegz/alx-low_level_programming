#include <stdio.h>

/**
 * main - print fibonacci sum < 4000000.
 * Return: Always 0.
 */

int main(void)
{
	long int n, a = 1, b = 2, sum = 0, nSum = 0;

	for (n = 0; n < 49; n++)
	{
		if ((b % 2 == 0 && b <= 4000000))
			nSum += b;
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%ld\n", nSum);

	return (0);
}
