#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
	{
		putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
