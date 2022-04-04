#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strlen - find len of a string
  * @s: string
  * Return: int
  */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
  * str_concat - concat 2 strings
  * @s1: para1
  * @s2: para2
  *
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	s = malloc((_strlen(s1) + _strlen(s2)) * (2 * sizeof(char)));
	if (s == 0)
		return (NULL);
	for (i = 0; i <= _strlen(s1) + _strlen(s2); i++)
	{
		if (i < _strlen(s1))
			s[i] = s1[i];
		else
			s[i] = s2[i - _strlen(s1)];
	}
	s[i] = '\0';
	return (s);
}
