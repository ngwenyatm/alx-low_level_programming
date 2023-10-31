#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file.
 * @text_content: content to be written into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fileD, writ;
int count;

if (filename == NULL)
return (-1);

fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fileD == -1)
	return (-1);
if (text_content == NULL)
	text_content = "";

for (count = 0; text_content[count]; count++)
	;

writ = write(fileD, text_content, count);

if (fileD == -1 || writ == -1)
return (-1);

close(fileD);

return (1);

}
