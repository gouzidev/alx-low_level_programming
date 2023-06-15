#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - oco
 * @s : pointer
 * Description: Uses stuf
 * Return: void.
**/

void print_rev(char *s)
{
	int lenS = strlen(s);
	int i;

	for (i = (lenS - 1); i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
