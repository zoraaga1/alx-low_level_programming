#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of file created
 * @text_content: the content of the file
 *
 * Return: 1 (Success)
 *		-1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _fd;
	size_t _text_len;
	ssize_t _bytes_written;

	if (filename == NULL)
		return (-1);

	_fd = open(filename, O_WRONLY | O_APPEND);
	if (_fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		_text_len = strlen(text_content);
		_bytes_written = write(_fd, text_content, _text_len);
		if (_bytes_written != (ssize_t)_text_len)
		{
			close(_fd);
			return (-1);
		}
	}
	close(_fd);
	return (1);
}
