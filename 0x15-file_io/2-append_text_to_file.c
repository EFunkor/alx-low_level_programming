#include "main.h"
#include <string.h>


/**
 * append_text_to_file - incld text at the end of a file or to check code.
 * @filename: pointer to the name of the file.
 * @text_content: string or content required to add at the end of the file.
 * Return: 1 for a succes -1 for failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int q, r;
	int size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	r = write(q, text_content, size);

	if (q == -1 || r == -1)
		return (-1);

	close(q);

	return (1);
}
