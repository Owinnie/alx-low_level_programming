#include <stdio.h>
#include <stdlib.h>
/**
  * main - argc and argv
  * @argc: para1
  * @argv: para2
  *
  * Return: int
  */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
