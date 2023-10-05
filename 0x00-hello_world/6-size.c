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

	printf("Size of a char: %d byte(s)\n", sizeof(x));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %d byte(s)\n", sizeof(y));

	return (0);
}
