#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - print struct dog
  * @d: para
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				(*d).name != NULL ? d->name : "\0",
				(*d).age,
				(*d).owner != NULL ? d->owner : "\0");
	}
}
