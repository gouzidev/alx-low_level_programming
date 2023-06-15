#include "lists.h"

/**
 * add_dnodeint_end - add node dbl linked list int
 * @head: head
 * @n: val of node
 *
 * Return: adrr
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *curr = *head;

new->n = n;

if (*head == NULL)
{
*head = new;
(*head)->next = NULL;
(*head)->prev = NULL;
return (*head);
}
else if ((*head)->next == NULL)
{
(*head)->next = new;
new->next = NULL;
new->prev = *head;
return (*head);
}
else
{
while ((*head)->next)
{
*head = (*head)->next;
}
(*head)->next = new;
new->prev = *head;
*head = curr;
}

return (new);
}
