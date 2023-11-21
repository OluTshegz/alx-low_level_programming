#include "lists.h"

/**
 * print_listint - prints all the elements of a 'listint_t' list
 * @h: pointer to head of singly-linked list 'listint_t' to print
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count += 1;
	}
	return (nodes_count);
}
