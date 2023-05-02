#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current, *check;

if (!head)
exit(98);

current = head;
while (current != NULL)
{
check = head;
printf("[%p] %d\n", (void *)current, current->n);
count++;
while (check != current)
{
if (check == current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
return (count);
}
check = check->next;
}
current = current->next;
}

return (count);
}
