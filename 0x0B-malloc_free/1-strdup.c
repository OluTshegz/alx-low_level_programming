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
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			*(p + j) = str[j];
		}
		p[j] = '\0';
	}
	return (p);
}
