#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * array_range - array of ints
  * @min: para1
  * @max: para2
  * Return: int
  */
int *array_range(int min, int max)
{
	int i;
	int *A;

	if (min > max)
		return (NULL);
	A = malloc((max - min + 1) * sizeof(int));
	if (A == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		A[i] = min + i;
	return (A);
}
