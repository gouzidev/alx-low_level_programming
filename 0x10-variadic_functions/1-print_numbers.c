#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separe numbers
 * @n: int, number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list vl;
unsigned int i = 0;

va_start(vl, n);
while (i < n)
{
printf("%i", va_arg(vl, int));
if (i + 1 != n && separator)
{
printf("%c", *separator);
}
i++;
}
printf("\n");
va_end(vl);
}

