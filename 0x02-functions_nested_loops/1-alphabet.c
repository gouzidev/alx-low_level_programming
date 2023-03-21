#include "main.h"

void print_alphabet(void)
{
        char i = 97;

        while (i < 123)
        {
                putchar(i);
                i++;
        }
        putchar('\n');
        return;
}

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	print_alphabet();
	return (0);
}
/**
* printer - prints my strings
* Description: displays str using for loop and putchar
* #str: string to give the function
**/
