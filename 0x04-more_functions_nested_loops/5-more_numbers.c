#include "main.h"

/**
 * print_most_numbers - oco
 * Description: Uses stuf
 * Return: void. no return
**/

void print_most_numbers(void)
{
	int i, j, res;

    	i = 0;
	while (i < 10)
	{
	j = 0;
	while (j <= 14)
	{
		if (j > 9)
		{
			_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar( (j % 48) + 48);
		
		j++;
	}
	i++;
	_putchar('\n');
	}
}
