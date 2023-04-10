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
		if (l_letter != 113 && l_letter != 101)
		{
			putchar(l_letter);
		}
		l_letter++;
	}
	putchar('\n');

	return (0);
}
