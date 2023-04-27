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

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
