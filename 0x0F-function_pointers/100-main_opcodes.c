#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, x;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		printf("%02x", (unsigned char)ptr[x]);
		if (x < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
