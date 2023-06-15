#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
int mem;
listint_t *store;

if (!*h)
return (0);
if (!h)
return (0);

while (*h)
{
mem = *h - (*h)->next;
if (mem <= 0)
{
free(*h);
count++;
*h = NULL;
break;
}
else
{
count++;
store = (*h)->next;
free(*h);
*h = store;
}
}

*h = NULL;

return (count);
}
