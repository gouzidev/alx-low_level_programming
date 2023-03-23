#include "main.h"

/**
 * print_square - oco
 * @size: size
 * Description: Uses stuf
 * Return: void. no return
**/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
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
	}
}
