#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - Function that implements the linear search algorithm
 * to search for a specific value in an array of integers.
 *
 * @array: A pointer to the array of integers to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for in the array.
 *
 * Return: The index of the value if found, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}