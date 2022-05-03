#include "main.h"
/**
  * read_textfile - read and print
  * @filename: file path
  * @letters: no. to read and print
  *
  * Return: type ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_output;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	read_output = read(fd, buf, sizeof(char) * letters);
	if (read_output == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	read_output = write(STDOUT_FILENO, buf, read_output);
	if (read_output == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (read_output);
}
