#include "dog.h"

/**
 * init_dog - initialize the dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}