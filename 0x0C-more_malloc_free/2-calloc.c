#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - array malloc allocate
  * @nmemb: para1
  * @size: para2
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	ptr = malloc(nmemb * sizeof(size));
	for (i = 0; i < sizeof(ptr); i++)
		ptr[i] = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
