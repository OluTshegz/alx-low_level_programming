#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: decimal digit to be checked.
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1, value;

	if (n == 0)
		return (0);

	/* ensure index is between 0 and 63 */
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1); /* index is out of range */

	check = check << index;

	if (n & check)
		value = 1;
	else
		value = 0;

	return (value);
}
