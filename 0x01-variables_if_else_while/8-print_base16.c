#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 48;
	char x = 'a';

	while (a <= 57)
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
