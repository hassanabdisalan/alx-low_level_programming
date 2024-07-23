#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
	/* Check if the pointer to the dog structure is not NULL */
	if (d == NULL)
		return;

	/* Free the name and owner strings if they are not NULL */
	if (d->name != NULL)
 		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	/* Free the memory allocated for the dog structure itself */
	free(d);
}
