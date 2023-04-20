#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints any combination of char, int, float, and string
 * @format: format string representing the arguments to print
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
const char allowed[] = "cifs";

va_start(args, format);

while (format && format[i])
{
unsigned int j = 0;

while (allowed[j])
{
if (format[i] == allowed[j] && i != 0)
{
printf(", ");
break;
}
j++;
}

switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
/* ignore unknown formats */
break;
}

i++;
}

printf("\n");

va_end(args);
}
