#include <stdio.h>
#include "dog.h"

/**
 * init_dog - create a dog instance
 * @d: creat an object of the struct
 * @name: name of the created struct
 * @age: age of the struct
 * @owner: owner if the created struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
