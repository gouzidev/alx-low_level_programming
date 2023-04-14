#include "main.h"
#include <stdlib.h>
/**
 * array_range - get length, malloc * length
 * loop size of length to insert min++ into new array
 * @min: min input
 * @max: max input
 * Return: pointer to new array of ints
 */
int *array_range(int min, int max)
{
int *array;
int i = 0, length;
if (min > max)
return (NULL);
length = max - min + 1;
array = malloc(sizeof(int) * length);
if (array == NULL)
{
return (NULL);
}
while (i < length)
{
array[i] = min++;
}
return (array);
}
