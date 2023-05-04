#include "main.h"
/**
 * power - convert binary to decimal.
 * @base: the binary number in string format
 * @exponent: the binary number in string format
 * Description: convert binary to decimal
 * Return: this return the convert number.
 */
int power(int base, int exponent) {
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
 * binary_to_uint - convert binary to decimal.
 * @b: the binary number in string format
 * Description: convert binary to decimal
 * section header: the header of this function is header.h
 * Return: this return the convert number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int p;
int sum = 0;
if (b == NULL)
{
return (0);
}
p = 0;
while (b[p])
{
if (b[p] != '0' && b[p] != '1')
{
return (0);
}
p++;
}
while (*b)
{
if (*b == '0')
{
p--;
}
else
{
p--;
sum += power(2, p);
}
b++;
}
return (sum);
}
