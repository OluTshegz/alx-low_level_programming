#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function (returning char pointer) that
 * concatenates all the arguments of your program.
 * Each argument should be followed by a \n in the new string.
 * @ac: count of args passed to the function.
 * @av: a char double pointer describing the array of arguments.
 *
 * Return: NULL if it fails or if ac == 0 or av == NULL
 * or a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j, k = 0, size = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	str = (char *) malloc((sizeof(char) * size) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = 0;
	return (str);
}
