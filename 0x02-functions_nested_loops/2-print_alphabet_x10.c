#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
