#include "main.h"
#include <stdio.h>
/**
  *  _strspn - length of substring
  * @s: para1
  * @accept: para2
  *
  * Return: int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int jndex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (jndex = 0; accept[jndex] != s[index]; jndex++)
		{
			if (accept[jndex] == '\0')
				return (index);
		}
	}
	return (index);
}
