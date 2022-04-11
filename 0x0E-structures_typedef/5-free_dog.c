#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - free dogs
  * @d: para
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
