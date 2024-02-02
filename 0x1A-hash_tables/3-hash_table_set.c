#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: A pointer to the hash table
 * @key: The key to add - cannot be an empty string
 * @value: The value associated with key
 * Return: 0 for error/failure, otherwise 1 for success
 */
/*Task 3. >>> ht['betty'] = 'cool':function adds element to hash table.*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_copy;
	unsigned long int index, i;
	/* If the hash table, key, or value is NULL, return 0. */
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{/* If the key already exists, update the value and return 1. */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	/**
     * If the key doesn’t exist, create
     * a new node and add it to the hash table.
    */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
