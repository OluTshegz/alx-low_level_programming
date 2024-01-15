#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: initial string segment to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] != 32)
		{
			for  (c = 0; accept[c] != '\0'; c++)
			{
				if (s[b] == accept[c])
					a++;
			}
		}
		else
			return (a);
	}
	return (a);
}
