#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate first string and n chars from the second string.
 *
 * @str1: First string.
 * @str2: Second string.
 * @n: Numbers of chars to concatenate from the second string.
 * Return: Pointer to the new string.
 **/
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
char *result;
unsigned int str1_len = 0;
unsigned int str2_len = 0;
unsigned int i = 0;

if (str1 != NULL)
{
while (str1[str1_len] != '\0')
{
str1_len++;
}
}

if (str2 != NULL)
{
while (str2[str2_len] != '\0')
{
str2_len++;
}
}

if (n >= str2_len)
{
result = malloc(sizeof(char) * (str1_len + str2_len + 1));
}
else
{
result = malloc(sizeof(char) * (str1_len + n + 1));
str2_len = n;
}

if (result == NULL)
{
return (NULL);
}

while (i < str1_len)
{
result[i] = str1[i];
i++;
}

while (i < str1_len + str2_len)
{
result[i] = str2[i - str1_len];
i++;
}

result[i] = '\0';

return (result);
}
