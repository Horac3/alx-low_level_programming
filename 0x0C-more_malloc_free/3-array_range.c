#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values to be stored
 * @max: maximum range of values to be stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

