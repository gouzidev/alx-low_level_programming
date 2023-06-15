#include "lists.h"

/**
 * sum_dlistint - gsum nodes
 * @head: head
 *
 * Return: adrr
 *
 */


int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *curr = head;

if (head == NULL)
{
return (0);
}

while (curr)
{
sum += curr->n;
curr = curr->next;
}
return (sum);
}
