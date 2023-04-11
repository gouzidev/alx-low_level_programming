#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	int i, j, k = 0;

	for (i = 0; i <= 9 ; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i != j && i != k && i < j && j != k && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if ((i * 100) + (j * 10) + k != 789)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
