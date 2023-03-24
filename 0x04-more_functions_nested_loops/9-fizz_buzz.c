#include <stdio.h>

/**
 * main - oco
 * Description: Uses stuf
 * Return: void. no return
**/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (1 % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
