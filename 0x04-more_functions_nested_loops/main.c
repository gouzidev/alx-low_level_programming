#include <stdio.h>

void print_numbers(void)
{
        int i = 48;

        while (i < 58)
        {
                putchar(i);
                i++;
        }
        putchar(10);
}

int main(void)
{
	print_numbers();
	return (0);
}
