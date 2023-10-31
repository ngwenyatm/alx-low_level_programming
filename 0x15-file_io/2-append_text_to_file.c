#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file.
 * @text_content: content.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	int count;
	int writ;

	if (filename == NULL)
		return (-1);

	fileD = open(filename, O_WRONLY | O_APPEND);

	if (fileD == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		writ = write(fileD, text_content, count);

		if (writ == -1)
			return (-1);
	}
	close(fileD);
	return (1);
}
