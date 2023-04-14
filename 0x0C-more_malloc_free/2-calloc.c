#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
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
