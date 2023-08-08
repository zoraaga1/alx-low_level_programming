#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of file created
 * @text_content: the content of the file
 *
 * Return: 1 (Success)
 *		0 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written != (ssize_t)text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
