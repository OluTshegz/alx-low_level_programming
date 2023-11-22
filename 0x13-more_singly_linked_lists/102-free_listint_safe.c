#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a 'listint_t' list
 * @h: pointer to the head of the node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_Node;
	listint_t *temp_Node;
	size_t size;

	current_Node = *h;
	size = 0;

	while (current_Node != NULL)
	{
		temp_Node = current_Node;
		current_Node = current_Node->next;
		size++;

		/* Check for a loop */
		if (temp_Node <= current_Node)
		{
			*h = NULL;  /* Set head to NULL before exiting */
			return (size);
		}

		free(temp_Node);
	}

	*h = NULL;  /* Set head to NULL after freeing the entire list */
	return (size);
}
