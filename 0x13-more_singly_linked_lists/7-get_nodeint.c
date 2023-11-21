#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a 'listint_t' linked list
 * @head: head pointer of the linked list 'listint_t'
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the desired node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL); /* the list is empty, there's nothing to search */

	while (head != NULL)
	{
		if (count == index)
		{
			return (head); /* node found, return it's address */
		}
		/* node not found, keep searching */
		head = head->next;
		count++;
	}

	return (NULL); /* the node does not exist */
}
