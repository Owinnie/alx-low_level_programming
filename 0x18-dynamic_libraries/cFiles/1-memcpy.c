#include "main.h"
#include <stdio.h>
/**
  * _memcpy - copies memory area
  * @dest: para1
  * @src: para2
  * @n: para3
  *
  * Return: char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
