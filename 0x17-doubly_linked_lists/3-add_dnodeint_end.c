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
dlistint_t *first = *head;
new->next = NULL;
new->prev = NULL;
new->n = n;

if (*head == NULL)
{
    *head = new;
    return (new);
}
else if ((*head)->next == NULL)
{
    (*head)->next = new;
    new->prev = *head;
    return (new);
}
else
{
    while ((*head)->next)
    {
        *head = (*head)->next;
    }
    (*head)->next = new;
    new->prev = *head;
    *head = first;
}
return (new);
}
