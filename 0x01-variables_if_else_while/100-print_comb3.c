#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	for (int i = 0; i <= 9 ; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i != j && j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(32);
			}
		}
	}
	return (0);
}
