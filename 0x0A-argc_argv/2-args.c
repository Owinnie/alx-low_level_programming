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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
