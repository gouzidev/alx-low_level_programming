#include "main.h"

/**
 * prime_n_helper - returns 1 if prime and 0 if not
 * @n: the number
 * @i: the range
 * Return: 1 or 0
 */

int prime_n_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_n_helper(n, i - 1));
}

/**
 * is_prime_number - returns 1 if prime and 0 if not
 * @n: the number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_n_helper(n, 2));
}
