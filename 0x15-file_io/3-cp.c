#include "main.h"
/**
  * main - copy content
  * @argc: no. of args
  * @argv: ptr
  * Return: int
  */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t write_b, close_fd, read_b = 1024;
	char buf[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{       dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);	}
	while (read_b == 1024)
	{
		read_b = read(file_from, buf, 1024);
		if (read_b == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);	}
		write_b = write(file_to, buf, read_b);
		if (write_b == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);	}
	}
	close_fd = close(file_from);
	if (close_fd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);	}
	close_fd = close(file_to);
	if (close_fd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);	}
	return (0);
}
