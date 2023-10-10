#include <stdio.h>

/**
 * main - prints all lower case alphabets in reverse order using putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
