#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
