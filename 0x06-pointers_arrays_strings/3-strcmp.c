#include "main.h"
/**
 * _strcmp - copy a string
 * @dest: input value
 * @src: input value
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			printf("%i" , -1);
			return (-1);
		}
		i++;
	}
	printf("%i" , 0);
	return (0);
}
