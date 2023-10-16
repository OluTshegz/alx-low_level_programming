#include "main.h"

/**
 * _strcpy - copies string including terminating byte
 * @dest: first pointer
 * @src: second pointer
 * Return: dest if successful
 */

char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';

	return (dest);
}
