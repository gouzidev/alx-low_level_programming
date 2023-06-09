#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - adds a new node at the end of a list_t list
 * @head: double pointer to listint_t
 * Return: he address of the new element, or NULL if it failed
 */

void free_listint(listint_t *head)
{
listint_t *curr = head;
listint_t *next = head;
if (head == NULL)
{
free(head);
return;
}
else
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
