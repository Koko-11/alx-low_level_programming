#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message, const char *file, int fd);

/**
 * main - Copies the content of one file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, exits with a code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1], 0);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to", argv[2], 0);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(file_to, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		error_exit(99, "Error: Can't write to", argv[2], 0);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file", argv[1], 0);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd", NULL, file_from);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd", NULL, file_to);

	return (0);
}

/**
 * error_exit - Exits the program with an error message and code.
 * @code: The exit code.
 * @message: The error message to print.
 * @file: The file causing the error (can be NULL).
 * @fd: The file descriptor (if applicable, 0 otherwise).
 */
void error_exit(int code, const char *message, const char *file, int fd)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", message, file);
	else if (fd > 0)
		dprintf(STDERR_FILENO, "%s %d\n", message, fd);
	else
		dprintf(STDERR_FILENO, "%s\n", message);

	exit(code);
}
