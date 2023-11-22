#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer to the list
 *
 * Return: The address of the node where the
 * loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr;
	listint_t *fast_ptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_ptr = head->next; /*Initialized to second node*/
	fast_ptr = head->next->next; /*Initialized to third node*/
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next; /*move one step at a time*/
		fast_ptr = fast_ptr->next->next; /*move one step at a time*/
		/*loop detected, check for a loop*/
		if (slow_ptr == fast_ptr)
		{
			/**
			 * reset slow to the head, move one pointer back to
			 * the start and iterate until they meet
			 */
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr); /*return the address of the node where the loop starts*/
		}
	}
	return (NULL);
}
