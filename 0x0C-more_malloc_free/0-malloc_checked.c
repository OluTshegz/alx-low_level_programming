#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 * @b: (an unsigned integer data type) size of the memory block
 * (number of bytes) to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_block;

	mem_block = malloc(b);

	if (mem_block == NULL)
	{
		exit(98);
	}
	else
	{
		return (mem_block);
	}
}
