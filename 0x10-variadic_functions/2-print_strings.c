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
char *str;

va_start(vl, n);
i = 0;
while (i < n)
{
str = va_arg(vl, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i + 1 < n)
printf("%s", separator);
i++;
}
printf("\n");
va_end(vl);
}
