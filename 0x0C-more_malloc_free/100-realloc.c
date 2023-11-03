#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * The contents will be copied to the newly allocated space, in the range
 * from the start of ptr up to the minimum of the old and new sizes
 * @ptr: a pointer to the memory previously allocated with malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the address of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr, *new_ptr;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;

	if (new_size > old_size)
	{
		while (x < old_size)
		{
			new_ptr[x] = old_ptr[x];
			x++;
		}
	}
	else
	{
		while (x < new_size)
		{
			new_ptr[x] = old_ptr[x];
			x++;
		}
	}

	free(ptr);
	return (new_ptr);
}
