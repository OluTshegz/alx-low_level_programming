#include <stdio.h>

/**
 * main - prints name, followed by a newline
 * @argc: number of command line arguments
 * @argv: array of comand line arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
