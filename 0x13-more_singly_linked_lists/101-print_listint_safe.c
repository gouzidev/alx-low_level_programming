#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* build_array_and_detect_loop - builds an array of nodes and detects loops
* @head: the head node. pointer
* @array: the array to build
* @count: the number of nodes in the array
* @index: the index of the node where the loop was detected
*
* Description: builds an array of nodes from the linked list pointed to by head,
*   and detects if the linked list contains a loop. If a loop is detected,
*   sets index to the index of the node where the loop was detected.
* Return: void
*/
void build_array_and_detect_loop(const listint_t *head, listint_t const **array, size_t *count, size_t *index)
{
unsigned int i;
unsigned int flag = 0;

while (head != NULL)
{
for (i = 0; i < *count; i++)
{
if (head == array[i])
{
flag = 1;
*index = i;
break;
}
else
{
flag = 0;
}
}

if (flag == 1)
{
break;
}

array[*count] = head;
head = head->next;
(*count)++;
}
}

/**
* print_listint_safe - prints a list but safely
* @head: the head node. pointer
*
* Description: dont wanna print a infinite loop
*   either match addresses or free the head so cant loop back
* Return: the count number
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
size_t index = 0;
listint_t const **array;

array = malloc(sizeof(listint_t *) * 1024);
if (!array)
exit(98);

build_array_and_detect_loop(head, array, &count, &index);

unsigned int i = 0;
while (i < count)
{
printf("[%p] %d\n", (void *)array[i], array[i]->n);
i++;
}

if (index != 0)
{
printf("-> [%p] %d\n", (void *)array[index], array[index]->n);
}

free(array);

return (count);
}
