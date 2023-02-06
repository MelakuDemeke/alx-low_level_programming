#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: string to write to file
 *
 * Return: 1 -> on success, -1 -> on faliure
*/

int create_file(const char *filename, char *text_content)
{
	int file, write_stat, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		write_stat = write(file, text_content, words);
		if (write_stat == -1)
			return (-1);
	}

	close(file);
	return (1);
}
