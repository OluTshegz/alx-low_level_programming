#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to represent in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* Right shift to move to the next bit */
	}
	/* Print binary representation, the least significant bit */
	_putchar((n & 1) + '0');
}
