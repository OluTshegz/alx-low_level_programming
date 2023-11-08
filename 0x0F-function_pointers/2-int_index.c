#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search inside
 * @size: size of the array
 * @cmp: pointer to compare function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found.
 * If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
