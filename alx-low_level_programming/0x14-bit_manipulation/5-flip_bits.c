/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count;
unsigned long int xor_result;

count = 0;
xor_result = n ^ m;
while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
