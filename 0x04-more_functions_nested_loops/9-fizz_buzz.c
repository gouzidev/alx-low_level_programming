#include <stdio.h>

/**
 * main - oco
 * Description: Uses stuf
 * Return: void. no return
**/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (1 % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}
	putchar('\n');
	return (0);
}
