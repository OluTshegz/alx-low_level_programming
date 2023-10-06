#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: a program to check the sign of a number
 * Return: 0 if successful
 */

int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d\n", n);

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	
	return (0);
}
