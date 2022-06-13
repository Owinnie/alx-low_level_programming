#include "main.h"
#include <stdio.h>
/**
  * _strcat - concatenate strings
  * @dest: para1
  * @src: para2
  * Return: char
  */
char *_strcat(char *dest, char *src)
{
	int index, jndex;

	index = 0;
	jndex = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[jndex] != '\0')
	{
		dest[index] = src[jndex];
		index++;
		jndex++;
	}
	dest[index] = '\0';
	return (dest);
}
