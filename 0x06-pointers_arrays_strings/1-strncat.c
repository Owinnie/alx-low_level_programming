#include "main.h"
#include <stdio.h>
/**
  * _strncat - concatenate strings
  * @dest: para1
  * @src: para2
  * @n: para3
  * Return: char
  */
char *_strncat(char *dest, char *src, int n)
{
	int index, jndex;

	index = 0;
	jndex = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (jndex < n && src[jndex] != '\0')
	{
		dest[index] = src[jndex];
		index++;
		jndex++;
	}
	dest[index] = '\0';
	return (dest);
}
