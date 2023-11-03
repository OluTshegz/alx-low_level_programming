#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max.
 * @min: smallest number in the array
 * @max: largest number in the array
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL; If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *block;
	int x, y = 0;

	if (min > max)
		return (NULL);

	block = malloc(sizeof(*block) * ((max - min) + 1));

	if (block == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = min; x <= max; x++)
		{
			block[y] = x;
			y++;
		}
		return (block);
	}
}
