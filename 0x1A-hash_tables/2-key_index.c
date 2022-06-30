#include "hash_tables.h"
/**
 * key_index - get index of a key
 * @key: key
 * @size: size of hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
