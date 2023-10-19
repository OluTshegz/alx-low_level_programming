#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: Input string
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i])
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		capitalize_next = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				   str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				   str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				   str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				   str[i] == '}');
		i++;
	}

	return (str);
}
