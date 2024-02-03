#include "hash_tables.h"
/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL if the key cannot be found/matched
 *         Otherwise - the value associated with element/key in ht.
 */
/*Task 4. >>> ht['betty']:function retrieves value associated with key.*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int index;
	/**
     * If the hash table is NULL or the key is NULL
     * or the key is an empty string, return NULL.
    */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	/*Get the index of the key.*/
	index = key_index((const unsigned char *)key, ht->size);
	/*If the index is greater than or equal to the size of the array return NULL*/
	if (index >= ht->size)
		return (NULL);
	/*Create a node pointer and set it to the index of the array.*/
	new_node = ht->array[index];
	/**
     * While the node is not NULL and the key is not equal
     * to the key of the node, set the node to the next node.
    */
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;
	/*Return the value of the node or NULL if the node is NULL.*/
	return ((new_node == NULL) ? NULL : new_node->value);
}
