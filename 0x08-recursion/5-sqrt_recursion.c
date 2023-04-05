#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));

}


/**
 * _sqrt - helper
 * @n: n
 * @i: int
 * Return: -1 /  natural sqrt
 */

int _sqrt(int n, int i)
{
	if (n <= 0 || i < 0)
	{
		return (-1);
	}
	if ( i * i == n )
	{
		return i;
	}
	if (n == i)
	{
		return (-1);
	}
	_sqrt(n, ++i);
}
