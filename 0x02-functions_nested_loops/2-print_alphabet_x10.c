#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
