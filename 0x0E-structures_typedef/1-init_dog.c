#include "dog.h"

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return ;
	d->age = age;
	d->name = name;
	d->owner = owner;
}