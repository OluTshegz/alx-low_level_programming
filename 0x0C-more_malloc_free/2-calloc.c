#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc and initialize it to zero
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem_block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_block = malloc(nmemb * size);
	if (mem_block == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
			mem_block[i] = 0;
		return (mem_block);
	}
}
