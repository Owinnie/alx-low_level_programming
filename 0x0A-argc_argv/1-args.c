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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
