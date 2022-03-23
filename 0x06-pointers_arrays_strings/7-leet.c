#include "main.h"
#include <stdio.h>
/**
  * leet - encode a string
  * @s: para
  * Return: char
  */
char *leet(char *s)
{
	char nums[] = "43071";
	char caps[] = "AEOTL";
	char lows[] = "aeotl";
	int index;
	int jndex;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (jndex = 0; jndex < 5; jndex++)
		{
			if (s[index] == caps[jndex] || s[index] == lows[jndex])
			{
				s[index] = nums[jndex];
			}
		}
	}
	return (s);
}
