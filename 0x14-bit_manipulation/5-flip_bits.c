#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number to convert to
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int counter = 0;

	while (flipped)
	{
		counter++;
		flipped &= (flipped - 1);
	}

	return (counter);
}
