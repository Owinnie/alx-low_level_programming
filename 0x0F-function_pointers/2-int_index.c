#include "function_pointers.h"
/**
  * int_index - search for int
  * @array: para1
  * @size: para2
  * @cmp: para3
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
