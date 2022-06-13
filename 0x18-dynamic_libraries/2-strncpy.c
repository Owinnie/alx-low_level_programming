#include "main.h"
#include <stdio.h>
/**
  * _strncpy - copies a string
  * @dest: para1
  * @src: para2
  * @n: para3
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
