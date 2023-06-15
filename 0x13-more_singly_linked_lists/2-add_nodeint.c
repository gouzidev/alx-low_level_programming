#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer to listint_t
 * @n: the number of elements in listint_t
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
