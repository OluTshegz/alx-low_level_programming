#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: head of the list
 *
 * Return: the sum of the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (sum);

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
