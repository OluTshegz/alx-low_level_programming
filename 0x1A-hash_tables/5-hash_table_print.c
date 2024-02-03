#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
*/
/*Task 5. >>> print(ht): function that prints a hash table.*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int i;
	unsigned char comma = 0;

	/*If the hash table is NULL, return.*/
	if (ht == NULL)
		return;

	/*Print the opening curly brace.*/
	printf("{");
    /*Loop through the array of the hash table.*/
	for (i = 0; i < ht->size; i++)
	{
		/*If index of the array is not NULL, print key and value of the node.*/
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			new_node = ht->array[i];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				/*If the next node is not NULL, print a comma and a space.*/
				if (new_node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	/*Print the closing curly brace.*/
	printf("}\n");
}
