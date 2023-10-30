#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file.
 * @letters: number of letters printed.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;

	ssize_t numrd;

	ssize_t numwr;

	char *buffer;

	if (filename == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);

	if (filedes == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);

	numrd = read(filedes, buffer, letters);
	numwr = write(STDOUT_FILENO, bufffer, numrd);
	free(buffer);
	close(filedes);

	return (numwr);
}

