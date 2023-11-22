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

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp_Node = *head;
		*head = (*head)->next;
		free(temp_Node);
	}

	*head = NULL;
}
