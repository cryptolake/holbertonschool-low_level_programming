#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - FREE THE DOG
 * @d: dog
 *
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}


/**
 * new_dog - creating a dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer to dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free_dog(dog);
		return (NULL);
	}
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free_dog(dog);
		return (NULL);
	}
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free_dog(dog);
		return (NULL);
	}


	dog->age = age;

	return (dog);
}
