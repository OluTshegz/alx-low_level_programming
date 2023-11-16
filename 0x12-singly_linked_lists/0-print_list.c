#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a 'list_t' list
 * @h: pointer to the structure
 * If str is NULL, print [0] (nil)
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		x++;
	}
	return (x);
}
