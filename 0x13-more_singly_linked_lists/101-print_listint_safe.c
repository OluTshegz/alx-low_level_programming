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
	size_t count = 0;
	long int difference;

	if (head == NULL)
		exit(98);

	while (head)
	{
		difference = (head) - (head->next);
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (difference < 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
		else
			head = head->next;
	}
	return (count);
}
