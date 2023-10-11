#include "search_algos.h"

/**
 * Interpolation Search
 *
 * This function performs interpolation search on an array of integers to find a specific value.
 *
 * @param array - A pointer to the array of integers to be searched
 * @param size - The number of elements in the array
 * @param value - The value to be searched for in the array
 * @return - The index of the target value in the array if found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t i, l, r;

    if (array == NULL)
        return (-1);

    for (l = 0, r = size - 1; r >= l;)
    {
        i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
        if (i < size)
            printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        else
        {
            printf("Value checked array[%ld] is out of range\n", i);
            break;
        }

        if (array[i] == value)
            return (i);
        if (array[i] > value)
            r = i - 1;
        else
            l = i + 1;
    }

    return (-1);
}