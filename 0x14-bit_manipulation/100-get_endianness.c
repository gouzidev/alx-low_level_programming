#include <stdint.h>

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
unsigned int value;
uint8_t *ptr;

ptr = (uint8_t *)&value;
value = 305419896;
return ((*ptr == 0x78) ? 1 : 0);
}
