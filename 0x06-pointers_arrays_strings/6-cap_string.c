#include "main.h"
#include <stdio.h>
/**
  * cap_string - capitalize
  * @s: para
  * Return: char
  */
char *cap_string(char *s)
{
	int index;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index - 1] == sep[index])
		{
			if (s[index] >= 'a' && s[index] <= 'z')
			{
				s[index] = s[index] - ' ';
			}
		}
	}
	return (s);
}
