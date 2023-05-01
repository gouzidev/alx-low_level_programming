#include "lists.h"

/**
 * pop_listint - frees a listint_t list and sets head to NULL.
 * @head: double pointer to the head of the listint_t list.
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *next;

	if (*head == NULL)
		return (n);

	n = (*head)->n;

	next = (*head)->next;

	free(*head);

	*head = next;

	return (n);
}
