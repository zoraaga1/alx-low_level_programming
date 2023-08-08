#include "main.h"	
#define BUFFER_SIZE 1024

/* Function declarations */
void copy_file(const char *source, const char *destination);
void close_file(int fd, const char *filename, const char *operation);
void handle_read_error(const char *filename);
void handle_write_error(const char *filename);


/**
 * print_usage_and_exit - Print usage message and exit with code 97.
 */
void print_usage_and_exit(void)
{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, other values on error.
 */
int main(int argc, char *argv[])
{
        const char *source = argv[1];
        const char *destination = argv[2];

	if (argc != 3)
	{
		print_usage_and_exit();
	}
	copy_file(source, destination);
	return (0);
}

/**
 * copy_file - Copies the content of the source file
 *		to the destination file.
 * @source: The name of the source file.
 * @destination: The name of the destination file.
 *
 * This function opens the source file for reading
 * and the destination file for writing.
 * It reads data from the source file in chunks
 * and writes it to the destination file
 * until the entire content is copied.
 * destination file until the entire content is copied.
 * If any errors occur during reading or writing,
 * appropriate error messages are printed and the
 * program exits with the corresponding exit code.
 */
void copy_file(const char *source, const char *destination)
{
	int fd_source, fd_destination;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	fd_source = open(source, O_RDONLY);
	if (fd_source == -1)
	{
		print_error_and_exit("Can't read from file", source);
		exit(98);
	}
	fd_destination = open(destination, O_CREAT | O_WRONLY | O_TRUNC,
                               S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_destination == -1)
	{
		close_file(fd_source, source, "Can't write to");
		print_error_and_exit("Can't write to", destination);
		exit(99);
	}
	while ((bytes_read = read(fd_source, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_destination, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close_file(fd_source, source, "Can't write to");
			close_file(fd_destination, destination, "Can't write to");
			handle_write_error(destination);
		}
	}

	if (bytes_read == -1)
	{
		close_file(fd_source, source, "Can't read from");
		close_file(fd_destination, destination, "Can't write to");
		handle_read_error(source);
	}

	close_file(fd_source, source, "Can't close");
	close_file(fd_destination, destination, "Can't close");
}

/**
 * close_file - Closes a file descriptor and handles errors if necessary.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the descriptor.
 * @operation: The description of the operation being performed.
 *
 * This function attempts to close the specified file descriptor. If the
 * closing operation fails, an error message is printed indicating the failure
 * and the program exits with the corresponding exit code.
 */
void close_file(int fd, const char *filename, const char *operation)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s fd %d\n", operation, fd);
		exit(100);
	}
}

/**
 * handle_read_error - Handles errors encountered during file reading.
 * @filename: The name of the file associated with the read operation.
 *
 * This function is called when an error occurs while reading from a file.
 * It closes the file descriptor, prints an error message, and exits the
 * program with the appropriate exit code.
 */
void handle_read_error(const char *filename)
{
	close_file(fd_source, filename, "Can't close");
	print_error_and_exit("Can't read from file", filename);
	exit(98);
}

/**
 * handle_write_error - Handles errors encountered during file writing.
 * @filename: The name of the file associated with the write operation.
 *
 * This function is called when an error occurs while writing to a file.
 * It closes both the source and destination file descriptors, prints an
 * error message, and exits the program with the appropriate exit code.
 */
void handle_write_error(const char *filename)
{
	close_file(fd_source, filename, "Can't close");
	close_file(fd_destination, filename, "Can't close");
	print_error_and_exit("Can't write to", filename, 99);
}
