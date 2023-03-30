#include "main.h"

/**
 * _strncpy - concatanates two string
 * @dest: the destination (wil change)
 * @src: what we will add to dest
 * @n: number
 * Description: man idk its obvious
 * Return: pointer to the dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	j = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
