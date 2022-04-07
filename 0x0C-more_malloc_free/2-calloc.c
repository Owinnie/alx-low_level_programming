#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _memset - fill with a constant byte
  * @t: pointer
  * @b: constant
  * @n: max bytes
  * Return: t
  */
char *_memset(char *t, char b, unsigned int n)
{
	char *str = t;

	while (n--)
		*t++ = b;
	return (str);
}
/**
  * _calloc - array malloc allocate
  * @nmemb: para1
  * @size: para2
  * Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
