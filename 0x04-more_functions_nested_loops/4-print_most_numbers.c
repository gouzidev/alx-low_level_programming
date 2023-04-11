#include "main.h"

/**
 * print_most_numbers - oco
 * Description: Uses stuf
 * Return: void. no return
**/

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
