#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * for multiples of three, print 'Fizz' instead of the number
 * for the multiples of five, print 'Buzz'
 * For numbers which are multiples of both three and five, print 'FizzBuzz'
 * Return: Always 0.
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x == 1)
		{
			printf("%d", x);
		}
		else if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
