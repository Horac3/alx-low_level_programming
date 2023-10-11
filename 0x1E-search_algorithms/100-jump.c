#include "search_algos.h"


/**
 * Performs a jump search algorithm to find a specific value in an array.
 *
 * @param array - A pointer to the array of integers to be searched.
 * @param size - The number of elements in the array.
 * @param value - The value to be searched for in the array.
 * @return The index of the target value in the array if found, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    for (i = jump = 0; jump < size && array[jump] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    jump = jump < size - 1 ? jump : size - 1;
    for (; i < jump && array[i] < value; i++)
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    return (array[i] == value ? (int)i : -1);
}