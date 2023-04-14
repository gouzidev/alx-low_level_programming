#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - oco
 * @str : pointer
 * Description: Uses stuf
 * Return: void.
**/

int _strlen(char *str)
{
  int i = 0;
  while (str[i])
  {
    i++;
  }
  return i;
}

/**
 * _string_nconcat - oco
 * @s1 : pointer
 * @s2 : pojner
 * @n: plyaer
 * Description: Uses stuf
 * Return: void.
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int lens1;
unsigned int lens2;
unsigned int i = 0; 
unsigned int j = 0; 
char *ptr;

if (s1 == NULL)
{
s1 = ""; 
}
if (s2 == NULL)
{
s2 = ""; 
}
lens1 = _strlen(s1);
lens2 = _strlen(s2);

if (lens2 <= n)
{
n = lens2;
}

ptr = malloc(n + lens1 + 1);

if (ptr == NULL)
return (NULL);

while (s1[i])
{
ptr[i] = s1[i];
printf("ptr => %c\n", ptr[i]);
i++;
}
while (j < n)
{
ptr[i] = s2[j];
printf("ptr => %c\n", ptr[i]);
j++;
i++;
}
ptr[i] = '\0';
return (ptr);
}
