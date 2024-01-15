#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: memory area to copy from
 * @src: memory area to copy to
 * @n: number of bytes to copy
 * Return: the pointer to @dest if successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
