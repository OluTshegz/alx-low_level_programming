#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: a pointer to the NULL terminated
 * string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL, return -1
 * If 'text_content' is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist,
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, len_count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_count = 0; text_content[len_count];)
			len_count++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, len_count);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
