#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	char l_letter = 48;

	while (l_letter <= 57)
	{
		putchar(l_letter);
		l_letter++;
	}
	putchar('\n');

	return (0);
}
