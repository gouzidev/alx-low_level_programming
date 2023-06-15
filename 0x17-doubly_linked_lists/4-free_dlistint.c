#include "lists.h"

/**
 * free_dlistint - free_dlistint
 * @head: head
 *
 * Return: adrr
 *
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
dlistint_t *next = head;

if (head != NULL)
{
    while (curr->next)
    {
        next = curr->next;
        free(curr);
        curr = next;
    }
    free(curr);
}
}
