#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int concatenated_string_length = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		concatenated_string_length++;

	concatenated_string = malloc(sizeof(char) * (concatenated_string_length + 1));

	if (concatenated_string == NULL)
		return (NULL);

	concatenated_string_length = 0;

	for (index = 0; s1[index]; index++)
		concatenated_string[concatenated_string_length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concatenated_string[concatenated_string_length++] = s2[index];

	concatenated_string[concatenated_string_length] = '\0';

	return (concatenated_string);
}
