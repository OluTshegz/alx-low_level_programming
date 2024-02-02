#include "hash_tables.h"
/* Task 1. djb2: a hash function implementing the djb2 algorithm. */
/**
* hash_djb2 - implementation of the djb2 algorithm
* @str: string used to generate hash value
*
* Return: the calculated hashed value
*/

unsigned long int hash_djb2(const unsigned char *str)
/* It takes a string and returns an unsigned long int. */
{
	unsigned long int hash;
	int c;

	/* It sets the hash to 5381. */
	hash = 5381;
	/**
	* It loops through the string, setting c to the current character
	* and incrementing the pointer to point to the next character.
	*/
	while ((c = *str++))
	{
	/**
    * It sets the hash to the previous hash value
    * times 33 plus the current character.
    */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
    /* It returns the hash. */
	return (hash);
}
