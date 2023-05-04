#include "main.h"
#include <stdio.h>
/**
 * power - convert binary to decimal.
 * @base: the binary number in string format
 * @exponent: the binary number in string format
 * Description: convert binary to decimal
 * Return: this return the convert number.
 */
int power(int base, int exponent)
{
int result = 1;
int i = 0;
while (i < exponent)
{
result *= base;
i++;
}
return (result);
}

/**
 * get_bit - prints the binary representation of a number
 * @n: the number to print in binary
 * @index: the number to print in binary
 * Return: this return the convert number.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n & power(2, index) ? 1 : 0);
}
