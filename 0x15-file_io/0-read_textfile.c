#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: a pointer to the file to be read
 * @letters: the number of letters it should read and print
 *
 * Return: 0 if the file can not be opened or read
 * or if filename is NULL or if 'write' fails
 * or does not write the expected amount of bytes
 * otherwise the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, read_file, write_file;
	char *file_buffer;

	if (!filename || filename == NULL)
		return (0);

	file_buffer = malloc(sizeof(char) * letters);
	if (!file_buffer || file_buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, file_buffer, letters);
	write_file = write(STDOUT_FILENO, file_buffer, read_file);

	if (open_file == -1 || read_file == -1 ||
			write_file == -1 || write_file != read_file)
	{
		free(file_buffer);
		return (0);
	}

	free(file_buffer);
	close(open_file);

	return (write_file);
}
