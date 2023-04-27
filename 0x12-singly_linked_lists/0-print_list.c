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
	int nodes_count = 0;
	list_t const *curr = h;
	if (h->next == NULL)
	{
		return (1);
	}	
	while (curr)
	{
		nodes_count++;
		if (curr->str != NULL)
		{
			printf("[%d] %s\n", curr->len, curr->str);
		}
		else
		{
			printf("[%c] %s\n", '0', "(nil)");
		}
		curr = curr->next;
		}
	return (nodes_count);
}
