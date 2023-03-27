#include "main.h"

/**
 * print_array - j function that prints n elements of an array
 * @j: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *j, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", j[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", j[n - 1]);
		}
			printf("\n");
}

