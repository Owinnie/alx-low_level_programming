#include "main.h"
#include <stdio.h>
/**
  * reverse_array - reverse content
  * @a: para1
  * @n: para2
  */
void reverse_array(int *a, int n)
{
	int index, jndex, new;

	for (index = 0, jndex = (n - 1); index < jndex; index++, jndex--)
	{
		new = a[index];
		a[index] = a[jndex];
		a[jndex] = new;
	}
}
