#include "main.h"

/**
* create_file - creates a file
* @filename: pointer to  file
* @text_content: pointer to string of text
*
* Return: -1 if succesful, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;
	char *buf;

	if (text_content == NULL)
	{
		buf = '\0';
	}
	buf = malloc(sizeof(text_content) + 1);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	count = read(fd, buf, count);
	if (count == -1)
	{
		return (-1);
	}
	buf[count] = '\0';
	count = write(STDOUT_FILENO, buf, count);
	if (count == -1)
	{
		return (free(buf), 0);
	}
	close(fd);
	free(buf);
	return (1);
}
