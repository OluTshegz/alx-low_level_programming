#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		while (size > 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}
