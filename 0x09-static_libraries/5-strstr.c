#include "main.h"
#include <stddef.h>

/**
 * *_strstr - a function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: string to search in
 * @needle: substring to look for whose occurence if found in @haystack
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (needle[y] == '\0')
			return (&haystack[x]);
	}
	return (NULL);
}
