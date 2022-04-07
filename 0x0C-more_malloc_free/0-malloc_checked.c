#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - malloc allocate
  * @b: para1
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	int *t;

	t = malloc(b);
	if (t == 0)
		exit(98);
	return (t);
}
