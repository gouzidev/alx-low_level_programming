#include "lists.h"
/**
 * reverse_listint - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * Return: 1 if it succeeded and -1 if it failed
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = *head;
listint_t *prev = *head;

if (*head == NULL)
{
return (NULL);
}
if ((*head)->next != NULL)
{
next = (*head)->next;
(*head)->next = NULL;
prev = *head;
*head = next;

while ((*head)->next)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
(*head)->next = prev;
}
return (*head);
}
