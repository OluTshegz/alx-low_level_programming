#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character argument
 * Return: 1 if upper and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (c);
}
