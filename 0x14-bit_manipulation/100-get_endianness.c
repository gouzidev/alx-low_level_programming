#include "main.h"
#include <stdint.h>

/**
 * get_endianness - rwould need to flip to get from
 *             one number to another.
 * Return: the number of bits needed to flip
 */

int get_endianness(void)
{
unsigned int value;
uint8_t *ptr;

value =  = 305419896;
ptr = (uint8_t *)&value;

return ((*ptr == 0x78) ? 1 : 0);
}
