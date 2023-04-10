#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	int i, j = 0;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && j > i)
			{
				putchar(i + 48);
				putchar(j + 48);
				if ((i * 10) + j != 89)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
