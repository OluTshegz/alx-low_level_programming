#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	char a = '0';
	char x = 'a';

	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
