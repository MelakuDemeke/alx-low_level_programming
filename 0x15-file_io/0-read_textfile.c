#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file name to read
 * @letters: number of letters to read
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fd_r, fd_w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	fd_r = read(fd, buf, letters);
	close(fd);
	if (fd_r == -1)
	{
		free(buf);
		return (0);
	}
	fd_w = write(STDOUT_FILENO, buf, fd_r);
	free(buf);
	if (fd_r != fd_w)
		return (0);
	return (fd_w);
}
