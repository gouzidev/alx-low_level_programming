#include "main.h"

/**
 * _strcat - concatanates two string
 * @dest: the destination (wil change)
 * @src: what we will add to dest
 * Description: man idk its obvious
 * Return: pointer to the dest
**/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
