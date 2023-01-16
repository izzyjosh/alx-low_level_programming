#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function of a dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog d;

	d.name = name;
	d.age = age;
	d.owner = owner;

	return (d);
}
