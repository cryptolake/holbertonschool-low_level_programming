#ifndef DOG_H_
#define DOG_H_
#include <stddef.h>

/**
 * struct dog - a dog like any other
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
