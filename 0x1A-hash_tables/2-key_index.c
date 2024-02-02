#include "hash_tables.h"
/* Task 2. key -> index: a function that gives you the index of a key. */
/**
* key_index - Get the index at which a key/value pair should
*             be stored in array of a hash table.
* @key: The key to get the index of.
* @size: The size of the array of the hash table.
*
* Return: The index of the key.
*
* Description: Uses the djb2 algorithm.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
/* It takes a key and a size as input. */
{
	/* It uses the hash_djb2 function to get the hash of the key. */
	/* It uses the modulo operator to get the index of the key. */
	return (hash_djb2(key) % size);
}
