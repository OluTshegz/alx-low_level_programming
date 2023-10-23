#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * of integers.
 * @a: array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	unsigned long int y = 0, z = 0;

	for (x = 0; x < size; x++)
	{
		z += a[(size * x) + x];
		y += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%ld, %ld\n", z, y);
}
