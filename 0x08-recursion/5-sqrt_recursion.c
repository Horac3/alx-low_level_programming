#include "main.h"

/**
 * actual_sqrt_recursion - recursive function to find
 * the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root, or -1 if it doesn't exist
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root, or -1 if it doesn't exist
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
