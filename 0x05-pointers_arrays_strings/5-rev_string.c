#include "main.h"
/**
  * rev_string - reverses a string
  * @s: para
  */
void rev_string(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	while (index > 0)
	{
		s--;
		index--;
	}
}
