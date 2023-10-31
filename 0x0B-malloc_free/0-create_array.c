#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to fill
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *) malloc(sizeof(char) * size);
	}
	if (array == 0)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			*(array + index) = c;
		}
	}
	*(array + index) = '\0';
	return (array);
}
