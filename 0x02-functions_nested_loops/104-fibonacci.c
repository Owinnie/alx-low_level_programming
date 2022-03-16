#include <stdlib.h>
#include <stdio.h>
/**
  * fib - fibonacci
  * @n: parameter
  * fibonacci sequence
  *
  * main - function
  * main function
  * Return: 0
  */
int fib(int n)
{
	int f0;
	int f1;
	int fn;
	int i;

	f0 = 0;
	f1 = 1;
	printf("%d, ", f1);
	for (i = 2; i < n; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		if (i != (n - 1))
		{
			printf("%d, ", fn);
		}
		else
		{
			printf("%d", fn);
		}
	}
	printf("\n");
	return (0);
}
int main(void)
{
	int n = 100;

	fib(n);
	return (0);
}
