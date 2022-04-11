#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize
  * @d: para1
  * @name: para2
  * @age: para3
  * @owner: para4
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
