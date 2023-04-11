#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
* _strlen - creates an array of chars and initializes it
* @str: the size that main function sends us
*
* Description: use malloc and argc argv to achieve goal
*       returns null if size is zero. returns a
*       pointer to the array or NULL if it fails.
* Return: the pointer if successful, NULL if not
*/

int _strlen(char *str)
{
int i = 0;
while (*str != '\0')
{
str++;
i++;
}
return (i);
}

/**
* _strdup - creates an array of chars and initializes it
* @str: the size that main function sends us
*
* Description: use malloc and argc argv to achieve goal
*       returns null if size is zero. returns a
*       pointer to the array or NULL if it fails.
* Return: the pointer if successful, NULL if not
*/

char *_strdup(char *str)
{
	char *p;
	char *initialP = str;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (char *) malloc((_strlen(str) + 1) * sizeof(str[0]));
	if (p == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		*p = *str;
		p++;
		str++;
	}
	return (initialP);
}
