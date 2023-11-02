#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * if NULL is passed, treat it as an empty string
 * If n is greater or equal to the length of s2 then use the entire string s2
 * @s1: destination string to be appended to
 * @s2: source string to concatenate from
 * @n: The maximum number of bytes of s2 to concatenate to s1
 *
 * Return: a pointer to new memory allocated space and null terminated
 * or NULL, if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int j, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	p = malloc((i * sizeof(char)) + n + 1);
	if (p == NULL)
		return (0);

	for (j = 0; j < i + n; j++)
	{
		if (j < i)
			p[j] = s1[j];
		else
			p[j] = s2[j - i];
	}
	p[j] = '\0';
	return (p);
}
