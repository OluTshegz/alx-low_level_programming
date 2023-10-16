#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an
 * array of integers followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x != 0)
			printf(", %d", a[x]);
		else
			printf("%d", a[x]);
		x++;
	}
	printf("\n");
}
