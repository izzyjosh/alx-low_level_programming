#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog object memory
 * @d: pointer to struct object
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
