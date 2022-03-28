#include "main.h"
#include <stdio.h>
/**
  * _strchr - locate a character
  * @s: para1
  * @c: para2
  *
  * Return: char
  */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}
	return ('\0');
}
