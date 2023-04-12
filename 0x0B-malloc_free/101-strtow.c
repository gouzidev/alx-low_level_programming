#include <stdlib.h>
#include "main.h"

/**
 * words_len - helper function to count the number of words in a string
 * @str: string to evaluate
 * Return: number of words
 */
int words_len(char *str)
{
int i;

int flag = 0, word_count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
word_count++;
}
}

return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
int str_len = 0;
int word_count = 0;
int i = 0;
int j = 0;
int k = 0;
int c = 0;
int start = 0;
int end = 0;
char **arr, *x;

if (str == NULL || *str == '\0')
return (NULL);

while (str[str_len] != '\0')
str_len++;

word_count = words_len(str);
if (word_count == 0)
return (NULL);

arr = malloc(sizeof(char *) * (word_count + 1));
if (arr == NULL)
return (NULL);

for (i = 0; i <= str_len; i++)
{
if (str[i] == '\0'  || str[i] == ' ')
{
if (c > 0)
{
end = i;
x = malloc(sizeof(char) * (c + 1));
if (x == NULL)
return (NULL);

for (j = start; j < end; j++)
x[j-start] = str[j];

x[c] = '\0';

arr[k] = x;
k++;

c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}

arr[k] = NULL;

return (arr);
}
