#include <main.h>
void _putchar(char c)
{
	putchar(c);
	return (0);
}


int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
