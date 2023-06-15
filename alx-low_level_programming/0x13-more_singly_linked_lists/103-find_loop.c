#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *runn = head;
listint_t *goes = head;

if (!head)
return (NULL);

while (runn && goes)
{
if (goes->next)
{
goes = goes->next->next;
runn = runn->next;
if (goes == runn)
{
runn = head;
while (!(runn == goes))
{
goes = goes->next;
runn = runn->next;
}
return (goes);
}
}
}

return (NULL);
}
