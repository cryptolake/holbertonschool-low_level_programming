#include "dog.h"
#include <stdlib.h>

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
	char *dname = strdup(name);
	char *downer = strdup(owner);


	dog = malloc(sizeof(dog_t));
	if (!dog || !dname || !downer)
	{
		free(dname);
		free(downer);
		free(dog);
		return (NULL);
	}

	dog->name = dname;
	dog->age = age;
	dog->owner = downer;

	return (dog);
}
