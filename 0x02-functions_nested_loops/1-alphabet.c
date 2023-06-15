#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */

void print_alphabet(void)
{
	int ch = 97;

	while (ch < 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
