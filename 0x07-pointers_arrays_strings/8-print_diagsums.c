#include <stdio.h>
/**
  * print_diagsums - sum of diagonals
  * @a: para1
  * @size: para2
  */
void print_diagsums(int *a, int size)
{
	int x, total, total1;

	total = 0;
	total1 = 0;
	for (x = 0; x < size; x++)
	{
		total += a[x];
		total1 += a[size - x - 1];
		a += size;
	}
	printf("%d", total);
	printf("%d\n", total1);
}
