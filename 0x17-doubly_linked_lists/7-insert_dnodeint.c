#include "lists.h"

/**
 * insert_dnodeint_at_index - inserrtt
 * @h: head
 * @idx: idx
 * @n: n
 *
 * Return: adrr
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *curr = *h;
dlistint_t *next = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->next = NULL;
new->prev = NULL;
new->n = n;

if (idx == 0)
{
if (*h != NULL)
(*h)->prev = new;
new->next = *h;
*h = new;
return (new);
}
while (curr)
{
if (idx == ++i)
{
/* lets see if were not at the end */
if (curr->next)
{
next = curr->next;
next->prev = new;
new->next = next;
}
new->prev = curr;
curr->next = new;
return (new);
}
curr = curr->next;
}
return (NULL);
}
