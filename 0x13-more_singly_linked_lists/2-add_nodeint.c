#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a 'listint_t' list
 * @head: A pointer to the address of the head of the 'listint_t' list
 * @n: the data for the new node to contain
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
