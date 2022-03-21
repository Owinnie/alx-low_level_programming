#include <stdio.h>
#include "main.h"
/**
  * print_array - print eles of array
  * @a: para1
  * @n: para2
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
