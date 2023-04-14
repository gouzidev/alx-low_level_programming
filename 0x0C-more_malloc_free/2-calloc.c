#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;

if (!nmemb || !size)
return (NULL);
p = malloc(size * nmemb);
if (!p)
{
return (NULL);
}
_memset(p, 0, (nmemb * size));
return (p);
}

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n)
*s = b;
s++;
n--;
return (p);
}
