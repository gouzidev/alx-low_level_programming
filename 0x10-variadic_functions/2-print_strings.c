#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: a pointer to the str to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list vl;
char *s;

va_start(vl, n);
/* I run trough the s to know which are the words ill print */
i = 0;
while (i < n)
{
/* s is equal to the arguments in vl */
/* s now represents the arguments while va_Arg iterates */
s = va_arg(vl, char*);
/* task condition */
/* if one of the strings is NULL print (nil) */
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (i + 1 < n && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(vl);
}
