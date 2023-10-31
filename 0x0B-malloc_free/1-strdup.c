#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free
 * @str: string to be duplicated
 * Return: NULL if insufficient memory was available or if str = NULL;
 * on success, returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int x = 0, y;
	char *p;

	if (str == NULL)
	{
		return (0);
	}

	while (str[x] != '\0')
	{
		x++;
	}

	p = malloc((x + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (y = 0; y < x; y++)
		{
			*(p + y) = str[y];
		}
		p[y] = '\0';
	}
	return (p);
}
