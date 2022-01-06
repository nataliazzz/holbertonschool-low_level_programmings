#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - number of elements in a doubly linked list
  * @h: linked list to count
  *
  * Return: elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
