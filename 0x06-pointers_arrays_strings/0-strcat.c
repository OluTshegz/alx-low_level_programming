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
	char *ptr = dest;
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
