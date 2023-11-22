#include "lists.h"

/**
 * free_listint2 - frees a 'listint_t' list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_Node;
	listint_t *new_Node;

	if (*head == NULL)
		return;

	temp_Node = *head;

	while (*temp_Node != NULL)
	{
		new_Node = temp_Node->next;
		free(temp_Node);
		temp_Node = new_Node;
	}

	*head = NULL;
}
