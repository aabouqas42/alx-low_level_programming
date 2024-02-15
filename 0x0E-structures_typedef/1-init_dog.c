#include "dog.h"
#include <stdio.h>

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return ;
	d->age = age;
	d->name = name;
	d->owner = owner;
}
