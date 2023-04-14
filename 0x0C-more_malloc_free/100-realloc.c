#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 * If new_size == 0 and ptr is not NULL - NULL.
 * Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *a_memory;
char *ptr_init;
char *mem_copy;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
a_memory = malloc(new_size);

if (a_memory == NULL)
return (NULL);

return (a_memory);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

ptr_init = ptr;
a_memory = malloc(sizeof(*ptr_init) * new_size);

if (a_memory == NULL)
{
free(ptr);
return (NULL);
}

mem_copy = a_memory;

i = 0;
while (i < old_size && i < new_size)
{
mem_copy[i] = *ptr_init++;
i++;
}

free(ptr);
return (a_memory);
}
