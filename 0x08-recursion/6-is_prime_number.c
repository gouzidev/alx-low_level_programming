#include "main.h"

/**
 * prime_n_helper - returns 1 if prime and 0 if not
 * @n: the number
 * @i: the range
 * Return: 1 or 0
 */

int prime_n_helper(int n, int i)
{
if (n < 4)
{
return (0);
}
if (n == i)
{
return (1);
}
if (((n / (i * i)) == 1) && ((i * (n / i)) == n))
{
return (0);
}
prime_n_helper(n, ++i);
}

/**
 * is_prime_number - returns 1 if prime and 0 if not
 * @n: the number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
return (prime_n_helper(n, 2));
}
