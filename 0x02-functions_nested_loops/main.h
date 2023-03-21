#include <stdio.h>
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
