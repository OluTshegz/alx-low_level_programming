#include "main.h"
#define BORDER 64

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change/the number to clear bit for
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > BORDER)
		return (-1);

	check = ~(check << index);
	*n = *n & check;

	return (1);
}
