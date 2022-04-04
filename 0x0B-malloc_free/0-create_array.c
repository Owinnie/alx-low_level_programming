#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - initialize array
  * @size: para1
  * @c: para2
  *
  * Return: char
  */
char *create_array(unsigned int size, char c)
{
	char *aray;
	unsigned int index;

	aray = malloc(sizeof(*aray) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (aray == NULL)
		{
			return (NULL);
		}
		else
		{
			for (index = 0; index < size; index++)
			{
				aray[index] = c;
			}
			return (aray);
		}
	}
}
