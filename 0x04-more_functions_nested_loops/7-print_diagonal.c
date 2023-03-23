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



	while (i < n)
	{
		j = 0;
		while (j > i)
		{
			if (j < i)
			{
				_putchar(' ');
			}
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
