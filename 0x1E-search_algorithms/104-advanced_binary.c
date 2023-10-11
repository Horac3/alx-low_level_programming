#include "search_algos.h"


/**
 * This function performs an advanced binary search on a sorted array of integers.
 * It searches for a specific value and returns the index where the value is located.
 *
 * @param array - A pointer to the first element of the sorted array.
 * @param left - The starting index of the subarray to search.
 * @param right - The ending index of the subarray to search.
 * @param value - The value to search for.
 * @return - If the value is not present in the array or the array is NULL, return -1.
 *           Otherwise, return the index where the value is located.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;

    if (right < left)
        return (-1);

    printf("Searching in array: ");
    for (i = left; i < right; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);

    i = left + (right - left) / 2;
    if (array[i] == value && (i == left || array[i - 1] != value))
        return (i);
    if (array[i] >= value)
        return (advanced_binary_recursive(array, left, i, value));
    return (advanced_binary_recursive(array, i + 1, right, value));
}


/**
 * Performs an advanced binary search on a sorted array of integers.
 *
 * @param array - A pointer to the first element of the sorted array.
 * @param size - The number of elements in the array.
 * @param value - The value to search for.
 * @return - If the value is not present in the array or the array is NULL, returns -1.
 *           Otherwise, returns the index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
