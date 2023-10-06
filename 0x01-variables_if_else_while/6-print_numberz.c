#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
