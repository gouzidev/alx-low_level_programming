#include <stdio.h>

/**
 * main - oco
 * Description: Uses stuf
 * Return: void. no return
**/

void main(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if (1 % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i", i);
		}

		i++;
	}
	printf("Buzz");
	printf("\n");
}
