#include "hash_tables.h"

/**
 * hash_table_set - sets val for ht
 * @ht: ht
 * @key: key
 * @value: value
 * Return: 1 true 0 false
 * Description: good
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node;
hash_node_t *curr;
unsigned int idx = key_index((const unsigned char *) key, ht->size);

if (strcmp(key, "") == 0 || key == NULL)
return (0);
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);

node->key = (char *) key;
node->value = (char *) value;
node->next = NULL;

if (ht->array[idx] == NULL)
{
ht->array[idx] = node;
}
else
{
curr = ht->array[idx];
printf("1 curr key + val => %s , %s\n", curr->key, curr->value);
while (curr)
{
if (strcmp(curr->key, key) == 0)
{
curr->value = (char *) value;
return (1);
}
curr = curr->next;
}
node->next = ht->array[idx];
ht->array[idx] = node;
}
return (1);
}
