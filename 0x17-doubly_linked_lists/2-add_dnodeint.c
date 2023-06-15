#include "lists.h"

/**
 * add_dnodeint - add node dbl linked list int
 * @head: head
 * @n: val of node
 *
 * Return: adrr
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->prev = NULL;
    new->n = n;
    new->next = *head;
    if (*head != NULL)
        (*head)->prev = new;
    *head = new;
    return (new);
}
