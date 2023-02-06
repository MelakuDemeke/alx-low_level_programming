#include "main.h"

/**
 * check_and_exit - prints error messages and exits with exit number
 *
 * @error: the exit number
 * @str: file_in or file_out
 * @fd: file descriptor
 *
 * Return: 0 -> on success
*/
int check_and_exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 -> for success.
*/
int main(int argc, char *argv[])
{
	int file_in, file_out;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[MAXSIZE];

	if (argc != 3)
		check_and_exit(97, NULL, 0);

	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		check_and_exit(98, argv[1], 0);

	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		check_and_exit(99, argv[2], 0);

	while ((read_stat = read(file_in, buffer, MAXSIZE)) != 0)
	{
		if (read_stat == -1)
			check_and_exit(98, argv[1], 0);

		write_stat = write(file_out, buffer, read_stat);
		if (write_stat == -1)
			check_and_exit(99, argv[2], 0);
	}

	close_in = close(file_in);
	if (close_in == -1)
		check_and_exit(100, NULL, file_in);

	close_out = close(file_out);
	if (close_out == -1)
		check_and_exit(100, NULL, file_out);

	return (0);
}
