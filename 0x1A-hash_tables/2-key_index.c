#include "hash_tables.h"

/**
 * key_index - gets key
 * @key: key
 * @size: size
 * Return: u
 * Description: good looking
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int hash_code;
hash_code = hash_djb2(key);
hash_code = hash_code % size;
return (hash_code);
}
