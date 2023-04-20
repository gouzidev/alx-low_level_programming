#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Mandatory parameter
 *
 * Return: the sum, otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	unsigned int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(vl, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(vl, unsigned int);
		i++;
	}
	va_end(vl);
	return (sum);
}
