#include "main.h"

int is_prime_helper(int n, int i);
/**
 * is_prime_number - determines if a number is a prime number or not
 * @n: the number to evaluate
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: the number to evaluate
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)
{
	if (i >= 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

