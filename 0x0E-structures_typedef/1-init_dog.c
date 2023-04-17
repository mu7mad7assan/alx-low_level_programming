#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing a variable of type struct dog
 * @d: pointer that points to struct dog to initialize
 * @name: name given to initialize
 * @age: age given to initialize
 * @owner: owner of dog given to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
