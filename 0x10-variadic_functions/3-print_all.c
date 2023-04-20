#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any type
 * @format: arguments to print
 */

void print_all(const char * const format, ...)
{
va_list valist;
unsigned int i = 0, j, c = 0;
char *str;
const char allowed[] = "cifs";

va_start(valist, format);
while (format && format[i])
{
j = 0;
while (allowed[j])
{
if (format[i] == allowed[j] && c)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(valist, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(valist, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(valist, double)), c = 1;
break;
case 's':
str = va_arg(valist, char *), c = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} i++;
}
printf("\n"), va_end(valist);
}
