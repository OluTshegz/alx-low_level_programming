#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * data (n) of a 'listint_t' linked list
 * @head: head pointer to the first node of/in the list
 *
 * Return: the sum of all the data (n)
 * of the list or 0 - if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum_count = 0;

	if (head == NULL)
		return (0); /* the list is empty */

	while (head != NULL)
	{
		sum_count += head->n;
		head = head->next;
	}

	return (sum_count);
}
