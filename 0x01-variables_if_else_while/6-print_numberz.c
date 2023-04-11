#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	int l_letter = 0;

	while (l_letter <= 9)
	{
		putchar(l_letter + 48);
		l_letter++;
	}
	putchar('\n');
	return (0);
}
