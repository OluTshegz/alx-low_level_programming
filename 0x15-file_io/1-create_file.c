#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a NULL
 * terminated string to write to the file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it AND
 * if 'text_content' is NULL, create an empty file
 *
 * Return: 1 on success, -1 on failure
 * file can not be created, file can not be written, write “fails”, etc…
 * if filename is NULL, return -1
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, len_count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_count = 0; text_content[len_count];)
			len_count++;
	}

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(open_file, text_content, len_count);

	if (open_file == -1 || write_file == -1)
		return (-1);

	close(open_file);

	return (1);
}
