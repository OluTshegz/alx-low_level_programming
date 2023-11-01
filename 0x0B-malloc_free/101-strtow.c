#include "main.h"
#include <stdlib.h>

/**
 * count_word - a function to help count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - a function (returning char double pointer)
 * that splits a string into words.
 * Each element of this array should contain
 * a single word, null-terminated.
 * The last element of the returned array should be NULL.
 * Words are separated by spaces.
 * @str: a char pointer describing the array of splitted words.
 *
 * Return: NULL if it fails or if str == NULL or str == ""
 * or a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, x = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[x] = tmp - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[x] = NULL;

	return (matrix);
}
