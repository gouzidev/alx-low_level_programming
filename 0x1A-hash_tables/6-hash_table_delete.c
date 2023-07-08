#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table I want to delete
 * Return: nothinng
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int x;
hash_node_t *nodes_hash;
hash_node_t *el;

if (!ht)
return;

for (x = 0; x < ht->size; x++)
{
nodes_hash =  ht->array[x];
while (nodes_hash)
{
el = nodes_hash;
nodes_hash = nodes_hash->next;
free(el->key);
free(el->value);
free(el);
}
}
free(ht->array);
free(ht);
}
