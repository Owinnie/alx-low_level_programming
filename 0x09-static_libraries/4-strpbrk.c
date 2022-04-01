#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - search a string
  * @s: para1
  * @accept: para2
  *
  * Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int index, jndex;
	char *p;

	index = 0;
	for (; s[index] != '\0'; index++)
	{
		for (jndex = 0; accept[jndex] != '\0'; jndex++)
		{
			if (accept[jndex] == s[index])
			{
				p = &s[index];
				return (p);
			}
		}
	}
	return (0);
}
