#include "main.h"
/**
  * append_text_to_file - append txt at EOF
  * @filename: path
  * @text_content: null-terminated str
  *
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd;
	ssize_t write_output;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content != NULL)
	{
		write_output = write(fd, text_content, i);
		if (write_output == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
