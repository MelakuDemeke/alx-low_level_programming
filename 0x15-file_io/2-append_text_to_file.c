#include "main.h"

/**
 * append_text_to_file - appends text at the end a file
 *
 * @filename: file to add data
 * @text_content: text content to be added
 *
 * Return: 1 -> on success, -1 -> on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, append_stat, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		append_stat = write(file, text_content, words);
		if (append_stat == -1)
			return (-1);
	}

	close(file);
	return (1);
}
