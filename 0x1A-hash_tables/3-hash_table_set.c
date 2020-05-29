#include "hash_tables.h"

/**
 * hash_table_set - this sets the information in hash tables avoiding collision
 * @ht: hash table in which we want to set a new value
 * @key: key value, key that wants to be stored
 * @value: value associated with the key
 * Return: 1 if success 0 if something wrong happend
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int my_key;
	hash_node_t *new_node;

	if (*key == 0)
		return (0);
	my_key = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup((char *) key);
	new_node->value = strdup((char *) value);
	if (ht->array[my_key] == NULL)
	{
		new_node->next = NULL;
		ht->array[my_key] = new_node;
		return (1);
	}
	else
	{
		if (strcmp((ht->array[my_key])->key, key) == 0)
		{
			ht->array[my_key]->value = strdup((char *)value);
			return (1);
		}
		new_node->next = ht->array[my_key];
		ht->array[my_key] = new_node;
		return (1);
	}
}
