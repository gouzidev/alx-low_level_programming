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
		while (j < 15)
		{
			if (j > 9)
			{
				res = '1' + ((j + 48) % 48);
			}
			else
			{
				res = (j + 48) % 48;
			}
			_putchar(res);
		j++;
		}
	i++;
	}
	_putchar('\n');
}
