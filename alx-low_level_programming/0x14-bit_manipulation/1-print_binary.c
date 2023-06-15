#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
int good = 0;
unsigned long int m = 1UL << 63; /* start with MSB */

if (n == 0)
{
_putchar('0');
return;
}

while (m != 0)
{
if ((n & m) == 0 && good == 1)
_putchar('0');
if ((n & m) != 0)
{
_putchar('1');
good = 1;
}
m = m >> 1; /* shift m right */
}
}
