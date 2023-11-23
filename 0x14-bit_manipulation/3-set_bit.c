#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number to set bits for
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	/* ensure index is between 0 and 63 */
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1); /* index is out of range */

	check = check << index;
	*n = *n | check;

	return (1);
}
