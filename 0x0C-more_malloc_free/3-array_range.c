#include "main.h"
#include <stdlib.h>

/**
 * array_range - arr of ints
 * from min to max, inclusive.
 * @min: The first value of the arr.
 * @max: The last value of the arr.
 *
 * Return: If min > max or the function fails - NULL.
 * Otherwise - a pointer to the newly created arr.
 */

int *array_range(int min, int max)
{
int *arr;
int i;
int my_size;

if (min > max)
{
return (NULL);
}

my_size = max - min + 1;

arr = malloc(sizeof(int) * my_size);

if (arr == NULL)
{
return (NULL);
}

i = 0;
while (i < my_size)
{
arr[i] = min++;
i++;
}

return (arr);
}
