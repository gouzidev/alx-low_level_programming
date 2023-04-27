#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;
	list_t const *curr = h;

	while (curr)
	{
		if (curr->str != NULL)
		{
			printf("[%d] %s\n", curr->len, curr->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		curr = curr->next;
		nodes_count++;
	}
	return (nodes_count);
}
