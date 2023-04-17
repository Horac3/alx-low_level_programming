#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}

