#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or a pointer that should point to
 * a newly allocated space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int x = 0, y = 0, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x = 0;
	while (s1[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s2[y] != '\0')
	{
		y++;
	}
	s3 = malloc(sizeof(char) * (x + y + 1));
	if (s3 == NULL)
		return (0);
	for (i = 0; i < x; i++)
	{
		if (*s1)
			s3[i] = s1[i];
	}
	for (j = 0; j < y; j++)
	{
		if (*s2)
			*(s3 + j + j) = s2[j];
	}
	return (s3);
}
