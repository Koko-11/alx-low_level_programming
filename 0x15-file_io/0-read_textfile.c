#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints it to POSIX stdout
 * @filename: Pointer to the name of the file.
 * @letters: Number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, x, y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	y = read(fd, buffer, letters);
	x = write(STDOUT_FILENO, buffer, y);

	free(buffer);
	close(fd);
	return (x);
}
