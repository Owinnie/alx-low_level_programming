#include "main.h"
#include <stdio.h>
/**
  * _strstr - locate a substring
  * @haystack: para1
  * @needle: para2
  *
  * Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	int index, jndex;
	char *p;

	index = 0;
	for (; haystack[index] > '\0'; index++)
	{
		for (jndex = index; haystack[jndex] > '\0' && needle[jndex - index] > '\0'; jndex++)
		{
			if (haystack[jndex] != needle[jndex - index])
			{
				break;
			}
		}
		if (needle[jndex - index] == '\0')
		{
			p = &haystack[index];
			return (p);
		}
	}
	return (0);
}
