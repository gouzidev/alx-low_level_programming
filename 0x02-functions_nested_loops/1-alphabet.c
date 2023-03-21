#include "main.h"
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
