#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s : string
 * @c: character
 * Return: NULL
 */


char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}

	if (*ptr == c)
	{
		return (s);
	}
	return (NULL);
}
