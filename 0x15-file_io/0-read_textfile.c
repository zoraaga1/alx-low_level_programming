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
	char *_buffer;
	ssize_t _file;
	ssize_t _bytesWritten, _bytesRead;

	_file = open(filename, O_RDONLY);
	if (_file == -1)
		return (0);
	_buffer = malloc(sizeof(char) * letters);
	_bytesRead = read(_file, _buffer, letters);
	_bytesWritten = write(STDOUT_FILENO, _buffer, _bytesRead);

	free(_buffer);
	close(_file);
	return (_bytesWritten);
}
