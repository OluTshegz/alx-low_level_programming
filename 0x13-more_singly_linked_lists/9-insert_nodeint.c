#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list 'listint_t'
 * @idx: the index of the list where the
 * new node should be added. Index starts at 0
 * @n: integer data/value/content to be added
 *
 * Return: the address of the new node, or NULL
 * if it failed (if it is not possible to add the
 * new node at index idx, do not add the new node)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_Node;
	listint_t *current_Node = *head;
	unsigned int current_Index = 0;

	if (head == NULL)
		return (NULL);

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL); /* malloc failure */

	/* populate new_Node */
	new_Node->n = n;
	new_Node->next = NULL;
	if (idx == 0)
	{
		/* Insert at beginning */
		new_Node->next = *head;
		*head = new_Node;
		return (new_Node);
	}
	/* Traverse to the node just before desired position */
	while (current_Node != NULL && current_Index < (idx - 1))
	{
		current_Node = current_Node->next;
		current_Index += 1;
	}

	if (current_Node == NULL)
	{
		free(new_Node);
		return (NULL); /* Out of the limit/range */
	}
	/* Adjust pointers to insert new node */
	new_Node->next = current_Node->next;
	current_Node->next = new_Node;

	return (new_Node);
}
