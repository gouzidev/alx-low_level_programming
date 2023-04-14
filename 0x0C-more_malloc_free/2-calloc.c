#include "main.h"

/**
 * _calloc - array of elements, each of size bytes.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: If nmemb or size is 0, or if malloc fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allocated_memory = malloc(size * nmemb);

	if (allocated_memory == NULL)
		return (NULL);

	_memset(allocated_memory, 0, size * nmemb);

	return (allocated_memory);
}

/**
 * _memset - Fills the first n bytes.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
