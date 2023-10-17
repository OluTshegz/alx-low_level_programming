#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		c = rand() % 128;
		i += c;
		putchar(c);
	}
	putchar(2772 - i);
	putchar('\n');
	return (0);
}
