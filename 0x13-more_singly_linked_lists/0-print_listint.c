#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 *print_listint - lists an integer
 *@h: is an integer parameter
 *Return: returns integer with number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
