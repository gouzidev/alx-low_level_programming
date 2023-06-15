#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *curr = *head;

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}

else
{
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = new_node;
}
return (new_node);
}
