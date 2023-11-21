#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index 'index' of a 'listint_t' linked list
 * @head: pointer to the head of the list
 * @index: the index of the node that
 * should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_Node, *current_Node;
	unsigned int current_Index;

	if (head == NULL || *head == NULL)
		/* Invalid head pointer or empty list */
		return (-1);
	if (index == 0)
	{
		/* Delete the first node*/
		temp_Node = *head;
		*head = (*head)->next;
		free(temp_Node);
		return (1);
	}

	current_Node = *head;
	current_Index = 0;
	/* Traverse to the node just before the desired position */
	while (current_Node != NULL && current_Index < (index - 1))
	{
		current_Node = current_Node->next;
		current_Index += 1;
	}

	if (current_Node == NULL || current_Node->next == NULL)
		/* Invalid index or end of list */
		return (-1);
	/* Delete the node at the specified index*/
	temp_Node = current_Node->next;
	current_Node->next = current_Node->next->next;
	free(temp_Node);

	return (1);
}
