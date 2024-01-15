#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - a function locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: input string to search
 * @accept: string containing the bytes to look for
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return (NULL);
}
