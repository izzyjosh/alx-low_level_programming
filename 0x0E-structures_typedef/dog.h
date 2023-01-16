#ifndef HEADER
#define HEADER

/**
 * struct dog - a struct object
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: a dog object that holds data for name, age and
 * owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
