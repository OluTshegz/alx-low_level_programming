#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the address of the nth node of the list
 * NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
