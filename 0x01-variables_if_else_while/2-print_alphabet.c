#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	char l_letter = 97;

	while (l_letter <= 122)
	{
		putchar(l_letter);
		l_letter++;
	}
	l_letter = 65;
	while (l_letter <= 90)
	{
		putchar(l_letter);
	}
	putchar('\n');

	return (0);
}
