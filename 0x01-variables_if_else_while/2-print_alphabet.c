#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
  * main - Entry point
  * Description:Positive anything is better than negative nothing
  * Return: 0 (success)
*/
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;
	int len = sizeof(alphabets) / sizeof(alphabets[0]);

	while (i < len)
	{
		putchar(alphabets[i]);
		i++;
	}
	return (0);
}
