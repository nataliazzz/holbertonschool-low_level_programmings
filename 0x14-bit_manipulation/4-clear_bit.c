#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * clear_bit - value of a bit to 0 at a given index
  * @n: number to modify
  * @index: index in number to modify
  *
  * Return: 1 if it worked or -1 if error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
