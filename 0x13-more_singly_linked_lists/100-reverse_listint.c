#include "lists.h"

/**
 * reverse_listint - reverses a 'listint_t' linked list
 * @head: pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_Node;
	listint_t *new_Node;

	prev_Node = NULL;
	new_Node = NULL;

	while (*head != NULL)
	{
		new_Node = (*head)->next;
		(*head)->next = prev_Node;
		prev_Node = *head;
		*head = new_Node;
	}

	*head = prev_Node;
	return (*head);
}
