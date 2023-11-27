#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize the struct
 * @d: the struct
 * @name: the name of it
 * @age: its age
 * @owner: the owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
