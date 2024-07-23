#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog, a string.
 * @age: The age of the dog, a float.
 * @owner: The owner of the dog, a string.
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	/* Allocate memory for the new dog structure */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* Allocate memory and copy the name */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(name_copy, name);

	/* Allocate memory and copy the owner */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	/* Set the fields of the new dog structure */
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
