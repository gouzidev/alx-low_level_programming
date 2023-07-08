#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table I want to look into
 * @key: is the key I'm looking for in the hash table
 * Return: the value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *nodes_hash = NULL;

if (!ht || !key)
return (NULL);

idx = key_index((const unsigned char *)key, ht->size);

nodes_hash = ht->array[idx];

while (nodes_hash != NULL)
{

if (strcmp(nodes_hash->key, key) == 0)
return (nodes_hash->value);

nodes_hash = nodes_hash->next;
}

return (NULL);
}
