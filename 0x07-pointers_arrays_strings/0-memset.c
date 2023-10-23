#include "main.h"

/**
 * '*_memset' - a function that fills memory with a constant byte
 * @s: pointer to char memory area
 * @b: constant byte char
 * @n: number of bytes of the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x > n; x++)
	{
		s[x] = b;
	}

	return (s);
}
