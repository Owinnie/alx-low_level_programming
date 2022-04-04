#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - pointer to copy of string
  * @str: para1
  *
  * Return: char
  */
char *_strdup(char *str)
{
	int size, index;
	char *s;

	for (size = 0; str[size] != '\0'; size++)
		;
	s = malloc((sizeof(*str)) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < size; index++)
			s[index] = str[index];
	}
	return (s);
}
