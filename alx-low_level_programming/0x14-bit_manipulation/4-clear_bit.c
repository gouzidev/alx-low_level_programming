#include "main.h"
#include <stdio.h>

/**
 * clear_bit - prints the binary representation of a number
 * @n: the number to print in binary
 * @index: the number to print in binary
 * Return: this return the convert number.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask;

if (index > 64)
return (-1);
mask = 1 << index;
mask = ~mask;
*n = (*n & mask);
return (1);
}
