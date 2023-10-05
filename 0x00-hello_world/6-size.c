#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char x;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)"\n, (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));

	return (0);
}
