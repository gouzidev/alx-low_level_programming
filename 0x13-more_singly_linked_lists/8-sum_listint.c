#include "lists.h"

/**
 * sum_listint - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 * Return: int
 */

int sum_listint(listint_t *head)
{
int counter = 0;

if (head == NULL)
return (0);

while (head)
{
counter += head->n;
head = head->next;
}
return (counter);
}
