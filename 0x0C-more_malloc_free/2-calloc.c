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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeof(ptr); i++)
		ptr[i] = 0;
	return (ptr);
}
