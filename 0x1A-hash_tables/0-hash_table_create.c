#include "hash_tables.h"
/* Task 0. >>> ht = {}: a function that creates a hash table. */
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

    /* Allocate memory for the hash table. */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
    /* Allocate memory for the array of pointers to the nodes. */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
    /* Initialize the array of pointers to the nodes. */
		hash_table->array[i] = NULL;
    /* Return the pointer to the hash table. */
	return (hash_table);
}
