#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - function
  * @width: para1
  * @height: para2
  *
  * Return: int
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0)
		return (NULL);
	else if (height <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * height);
	for (i = 0; i < height; i++)
	{
		if (ptr == 0)
			return (NULL);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
