#include "search_algos.h"

/**
  * linear_search - search for value
  *
  * @array: pointer to the first element
  * @size: number of elements in array
  * @value: value to search for
  *
  * Return: first index where value is
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
