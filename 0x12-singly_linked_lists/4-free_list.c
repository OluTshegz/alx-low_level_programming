#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a 'list_t' list
 * @head: A pointer to the head of the node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

