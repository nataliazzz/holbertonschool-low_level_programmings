#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - sum of all data
  * @head: head of the doubly linked list
  *
  * Return: sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
