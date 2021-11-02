#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *dname;
	char *downer;


	dname = strdup(name);
	downer = strdup(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		free(dname);
		free(downer);
		return (NULL);
	}

	dog->name = dname;
	dog->age = age;
	dog->owner = downer;

	return (dog);
}
