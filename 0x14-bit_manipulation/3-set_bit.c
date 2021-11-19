#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - value of a bit to 1 at given index
  * @n: number to modify
  * @index: index in the number to modify
  *
  * Return: 1 if it worked or -1 if error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
