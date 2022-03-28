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
	int index;
	int jndex;

	for (jndex = 0; accept[jndex] != '\0'; jndex++)
		;
	for (index = 0; index <= jndex && s[index] != '\0'; index++)
		;
	return (index);
}
