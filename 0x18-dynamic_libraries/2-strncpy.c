#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the copy
 * @src: The string to be copied
 * @n: The number of bytes to be copied from src
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
