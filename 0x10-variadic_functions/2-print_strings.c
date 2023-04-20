#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with a separator
 * @separator: separe strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int j;
va_list vl;
char *curr;

va_start(vl, n);
i = 0;
while (i < n)
{
curr = va_arg(vl, char *);
j = 0;
while (curr[j])
{
printf("%c", curr[j]);
}
if (i != n - 1 && separator)
{
printf("%s", separator);
}
i++;
}
va_end(vl);
}
