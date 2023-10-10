#include <stdio.h>

/**
 * main - prints upper and lower case alphabets using putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
	char a = 'a', x = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
