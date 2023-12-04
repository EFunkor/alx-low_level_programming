#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: the hash table to be updated with key/value
 * @key: key that cannot be an empty string
 * @value: value associated with the key, can be an empty string.
 * Return: 1 on success and 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	/* initialising and denoting nC as current node */
	hash_node_t *new_node, *nC;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	nC = ht->array[index];

	while (nC != NULL)
	{
		if (strcmp(nC->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (new_value == NULL)
				return (0);
			free(nC->value);
			nC->value = new_value;
			return (1);
		}
		nC = nC->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
