#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prrints all elements of a double linked list
 * @h: double linked list to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
