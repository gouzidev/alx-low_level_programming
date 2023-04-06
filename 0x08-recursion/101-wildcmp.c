#include <stdio.h>
#include "main.h"

/**
* wildcmp - Entry point
* @str1: str 1
* @str2: str 2
* Return: 0
*/

int wildcmp(char *str1, char *str2)
{
if (*str1 == '\0' && *str2 == '\0')
return (1);
if (*str2 == *str1)
return (wildcmp(str1 + 1, str2 + 1));
if (*str2 == '\0')
return (0);
if (*str1 == '\0' && *str2 != '*')
return (0);
if (*str1 == '\0' && *str2 == '*')
return (wildcmp(str1, str2 + 1));
if (*str2 == '*')
return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));
return (0);
}
