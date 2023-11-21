#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked 'listint_t' list
 * @h: pointer to head node of singly-linked list 'listint_t' to traverse
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_elements;

	nodes_elements = 0;
	while (h)
	{
		h = h->next;
		nodes_elements++;
	}
	return (nodes_elements);
}
