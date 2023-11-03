#include "main.h"

/**
* main - copies the content of a file to another file
* @argc: number of elements
* @argv: array of arguments
* Return: 0.
*/

int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t chwr, fClose;
	ssize_t  chRd = 1024;
	char buff[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (chRd == 1024)
	{
		chRd = read(file_from, buff, 1024);

		if (chRd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		chwr = write(file_to, buff, chRd);

		if (chwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	fClose = close(file_from);
	if (fClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_from);
		exit(100);
	}
	fClose = close(file_to);
	if (fClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", file_to);
		exit(100);
	}
	return (0);
}
