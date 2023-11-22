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
	const listint_t *slow_ptr, *fast_ptr;
	size_t count;
	long int difference;

	count = 0;
	slow_ptr = head;
	fast_ptr = head;
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
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count += 1;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		/* Check for a loop */
		if (slow_ptr == fast_ptr)
			exit(98);
	}
	/* Print the last node if it exists and is not part of the loop */
	if (slow_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
	}
	return (count);
}
