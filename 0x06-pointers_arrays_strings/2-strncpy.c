#include "main.h"

/**
 * _strncpy - concatanates two string
 * @dest: the destination (wil change)
 * @src: what we will add to dest
 * @n: number
 * Description: man idk its obvious
 * Return: pointer to the dest
**/

char *_strncat(char *dest, char *src, int n)
{
	size_t counter = 0;

	int i = 0;

	while (src[j] && counter < n)
	{
		dest[i] = src[i];
		i++;
		counter++;
	}
	return (dest);
}
