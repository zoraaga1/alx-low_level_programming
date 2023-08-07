#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: file to be read
 * @letters: number of letters succed to be reading
 * Return: the actual number of letters it could read and print
 *		0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t bytesWritten, bytesRead;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytesRead = read(file, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free(buffer);
	close(file);
	return (bytesWritten);
}

