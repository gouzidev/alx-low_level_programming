#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 * @h : idk
 * Return: size.
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;

while (h)
{
size++;
h = h->next;
}
return (size);
}
