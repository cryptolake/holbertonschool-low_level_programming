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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	if (dog->name == NULL)
		return (NULL);

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}


	dog->age = age;

	return (dog);
}
