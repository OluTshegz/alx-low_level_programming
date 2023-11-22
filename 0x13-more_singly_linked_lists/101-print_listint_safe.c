#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a 'listint_t' linked list
 * @head: head pointer to the node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	long int difference;

	count = 0;

	while (head == NULL)
		return (0);

	while (head)
	{
		difference = (head) - (head->next);
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
