#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int n = 0;
	int a = 1;
	int i = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			a *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}

		if (i == 1)
		{
			break;
		}

		x++;
	}

	n *= a;
	return (n);
}
