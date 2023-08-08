#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage_and_exit - Print usage message and exit with code 97.
 */
void print_usage_and_exit(void)
{
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
}

/**
 * print_error_and_exit - Print error message and exit with specified exit code.
 * @error_message: The error message to print.
 * @filename: The name of the file associated with the error.
 * @exit_code: The exit code to use for termination.
 */
void print_error_and_exit(const char *error_message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", error_message, filename);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	if (argc != 3)
	{
		print_usage_and_exit();
	}
	*file_from = argv[1];
	*file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit("Can't read from file", file_from, 98);
	}
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit("Can't write to", file_to, 99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit("Can't write to", file_to, 99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit("Can't read from file", file_from, 98);
	}
	if (close(fd_from) == -1)
	{
		print_error_and_exit("Can't close fd", file_from, 100);
	}
	if (close(fd_to) == -1)
	{
		print_error_and_exit("Can't close fd", file_to, 100);
	}
	return (0);
}

