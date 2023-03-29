#include "main.h"

/**
 * _strncat - concatanates two string
 * @dest: the destination (wil change)
 * @src: what we will add to dest
 * @n: number
 * Description: man idk its obvious
 * Return: pointer to the dest
**/

char *_strncat(char *dest, char *src, int n)
{
	size_t counter = 0;

	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && counter < n)
	{
		dest[i] = src[j];
		j++;
		i++;
		counter++;
	}
	dest[i] = '\0';

	return (dest);
}
