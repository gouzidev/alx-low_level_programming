#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
  * main - Entry point
  * Description:Positive anything is better than negative nothing
  * Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes there */
	printf("Last digit of %i is %i", n, n % 10);
}
