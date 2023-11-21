#include "lists.h"

/**
 * free_listint - frees a 'listint_t' list
 * @head: head pointer to the first node on the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
