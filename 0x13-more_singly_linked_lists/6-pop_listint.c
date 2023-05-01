#include "lists.h"

/**
 * pop_listint - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 */
int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}
else
{
*head = (*head)->next;
return ((*head)->n);
}
}
