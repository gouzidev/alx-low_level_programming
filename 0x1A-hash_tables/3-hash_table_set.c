#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hashs table I want to add or update the key/value to
 * @key: is the str passed to djb2 (tha key )
 * @value: value associated with the key
 * Return: 1 if succeeded or 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *nodes_hash;
hash_node_t *new_node;
unsigned long int idx;

if (!ht || !key)
return (0);

idx = key_index((const unsigned char *)key, ht->size);
nodes_hash = ht->array[idx];
while (nodes_hash)
{
if (strcmp(nodes_hash->key, key) == 0)
{
free(nodes_hash->value);
nodes_hash->value = strdup(value);

if (nodes_hash->value == NULL)
return (0);

return (1);
}
nodes_hash = nodes_hash->next;
}
/* in case of adding a new node to the hash table */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);

if (new_node->value == NULL)
return (0);

new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
