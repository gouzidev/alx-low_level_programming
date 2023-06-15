#include <stdio.h>
#include <stdlib.h>

/**
 * before_main - frees list_t
 * Return: void
 */


void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
