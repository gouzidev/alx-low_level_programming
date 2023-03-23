#include "main.h"

/**
 * print_diagonal - oco
 * @n: idk
 * Description: Uses stuf
 * Return: void. no return
**/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		while (j < n)
		{
			i = 0;

			while (j > i)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}

	}
}
