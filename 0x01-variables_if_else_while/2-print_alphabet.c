#include <stdio.h>

/**
 * main - prints all lower case alphabets using putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');

	return (0);
}
