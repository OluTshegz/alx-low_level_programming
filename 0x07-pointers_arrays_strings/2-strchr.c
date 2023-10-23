#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: pointer to string 's'
 * @c: char to locate/find
 * Return: a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
