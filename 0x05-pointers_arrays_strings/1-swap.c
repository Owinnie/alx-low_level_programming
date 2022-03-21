#include "main.h"
/**
  * swap_int - swap value of integers
  * @a: parameter
  * @b: parameter
  */
void swap_int(int *a, int *b)
{
	int *i;
	int *j;

	i = a;
	j = b;
	a = j;
	b = i;
}
