#include "main.h"

/**
 * '*_strcat' - function that concatenates two strings
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte '(\0)' at the end of dest,
 * and then adds a terminating null byte
 * @desc: parameter pointer to a char
 * @src: parameter pointer to a char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}

	dest[i] = '\0';

	return (dest);
}
