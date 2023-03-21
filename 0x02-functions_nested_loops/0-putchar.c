#include <stdio.h>

int printer(char *str);

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	printer("_putchar");
	return (0);
}

int printer(char *str)
{
	for(int i = 0; i < sizeof(str)/sizeof(str[0]); i++)
	{
		putchar(str[i]);
	}
	return (0);
}
