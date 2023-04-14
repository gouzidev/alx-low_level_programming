#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *member;
char *param;
unsigned int index;

if (size <= 0 || nmemb == 0)
{
return (NULL);
}

member = malloc(size * nmemb);

if (member == NULL)
{
return (NULL);
}

param = member;

for (index = 0; index < (size * nmemb); index++)
{
param[index] = '\0';
}

return (member);
}

