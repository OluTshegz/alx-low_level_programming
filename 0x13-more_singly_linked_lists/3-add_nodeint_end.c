#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a 'listint_t' list
 * @head: a pointer to the head node of list
 * @n: data in new node
 *
 * Return: a pointer to the new head, else NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (current_node != NULL)
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
