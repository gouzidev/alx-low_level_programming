#include "main.h"

/**
 * _most_numbers - oco
 * Description: Uses stuf
 * Return: void. no return
**/

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
	_putchar('\n');
}
