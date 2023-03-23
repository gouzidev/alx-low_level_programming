#include "main.h"

/**
 * print_size - oco
 * @size: size
 * Description: Uses stuf
 * Return: void. no return
**/

void print_size(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
