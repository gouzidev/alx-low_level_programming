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
unsigned int hash_idx;
hash_node_t *existing_node;
hash_node_t *new_node;

if (strcmp(key, "") == 0 || key == NULL)
return (0);

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = malloc(sizeof(new_node->key));
if (new_node->key == NULL)
return (0);
new_node->value = malloc(sizeof(new_node->value));
if (new_node->value == NULL)
return (0);
new_node->next = malloc(sizeof(new_node->next));
strcpy(new_node->key, key);
strcpy(new_node->value, value);

existing_node = malloc(sizeof(hash_node_t));
if (existing_node == NULL)
return (0);

hash_idx = key_index((const unsigned char *) key, ht->size);
existing_node = ht->array[hash_idx];
if (!existing_node)
ht->array[hash_idx] = new_node;
else
{
while (existing_node->next)
{
existing_node = existing_node->next;
}
existing_node->next = new_node;
}
new_node->next = NULL;
return (1);
}
