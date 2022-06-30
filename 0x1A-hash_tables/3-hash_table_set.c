#include "hash_tables.h"
/**
 * make_hnode - creates hash node
 * @key: key
 * @value: value
 *
 * Return: new node, or NULL
 */
hash_node_t *make_hnode(const char *key, const char *value)
{
	hash_node_t *nd;

	nd = malloc(sizeof(hash_node_t));
	if (nd == NULL)
		return (NULL);
	nd->key = strdup(key);
	if (nd->key == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->value = strdup(value);
	if (nd->value == NULL)
	{
		free(nd->key);
		free(nd);
		return (NULL);
	}
	nd->next = NULL;
	return (nd);
}
/**
 * hash_table_set - set key
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
