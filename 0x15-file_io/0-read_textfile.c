#include "main.h"

/**
* read_textfile - reads text filename and prints
* it to the POSIX standard output
* @filename: pointer to text file
* @letters: number of letters it should read and print
*
* Return: number of letterd it could read an print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	char *buf;
	int fd;

	buf = malloc(letters + 1);
	fd = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	count = read(fd, buf, letters);
	if (count == -1)
	{
		return (free(buf), 0);
	}
	buf[letters] = '\0';
	count = write(STDOUT_FILENO, buf, count);
	if (count == -1)
	{
		return (free(buf), 0);
	}
	free(buf);
	close(fd);
	return (count);
}
