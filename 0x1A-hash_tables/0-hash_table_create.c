<<<<<<< HEAD
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}

=======
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: hash table size (array's size)
 *
 * Return: pointer to hash table (Success) | NULL (Failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(*table));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof((*table->array)) * size);
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
>>>>>>> 3c193649c16bfca2bd7ddf1370a1b1ee1ff67f6c
