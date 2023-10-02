#include "main.h"
#include <unistd.h>
#include <stdio.h>


/**
 * create_file - fxn to Create a file with spec. content in it.
 * @filename: pointer, to the name of the file to create.
 * @text_content: the txt content to be written to the file.
 *
 * Return: For when the function fails -1 (failure).
 *         else, 1 (success).
 */
int create_file(const char *filename, char *text_content)
{
	int FDr, wr, text_size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_size = 0; text_content[text_size];)
			text_size++;
	}

/*  0600 permissions,to open a file, create as well as write, with */
	FDr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, text_size);

	if (FDr == -1 || wr == -1)
		return (-1);

	close(FDr);

	return (1);
}
