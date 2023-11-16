#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the
 * beginning of a 'list_t' list
 * @head: pointer to a pointer of the head node
 * to the singly-linked list 'list_t'
 * @str: new string to add/store
 * str needs to be duplicated
 *
 * Return: the address of the
 * new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = copy;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
