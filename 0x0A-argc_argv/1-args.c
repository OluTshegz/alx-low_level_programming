#include <stdio.h>

/**
 * main - prints number of command line arguments
 * @argc: number of command line arguments
 * @argv: array containing the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
