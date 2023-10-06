#include <stdio.h>

/**
 * main - print lower case alphabets without q and e
 *
 * Return: 0 if successful
 */

int main(void)
{
	char b = 'a';
	
	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');

	return (0);
}
