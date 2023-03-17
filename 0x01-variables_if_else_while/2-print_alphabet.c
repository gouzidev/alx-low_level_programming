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
	for (int i = 0 ; i < strlen(alphabets) ; i++)
		putchar(alphabets[i]);
	return (0);
}
