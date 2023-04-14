#include "main.h"

/**
 * string_nconcat - Concatenfirst n characters of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of characters to concatenate from s2.
 *
 * Return: Pointer to a newly allocated space in memory string.
 * If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n > len2)
n = len2;

result = malloc((len1 + n + 1) * sizeof(char));
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (; i < (len1 + n); i++)
result[i] = s2[i - len1];

result[i] = '\0';

return (result);
}
