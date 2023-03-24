#include "main.h"

/**
 * print_triangle - oco
 * @size: size
 * Description: Uses stuf
 * Return: void. no return
**/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
				_putchar(' ');
			for (j = i + 1; j > 0; j--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
