#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function
 * @d: name of the dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if ((*d).age != NULL)
			printf("Age: %d\n", d->age);
		else
			printf("Age: (nil)");
		if ((*d).owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			print("Owner: (nil)");
	}
}
