#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initializes dog struct
 * @d: dog struct
 * @name: name pointer argument
 * @age: integer argument
 * @owner: pointer argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
