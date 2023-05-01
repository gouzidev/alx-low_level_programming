#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - adds a new node at the end of a list_t list
 * @head: double pointer to listint_t
 * Return: he address of the new element, or NULL if it failed
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
return;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
