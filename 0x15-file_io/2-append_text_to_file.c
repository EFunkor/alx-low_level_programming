#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - incld text at the end of a file or to check code.
 * @filename: pointer to the name of the file.
 * @text_content: string or content required to add at the end of the file.
 * Return: 1 for a succes, then -1 for failure.
 */


int append_text_to_file(const char *filename, char *text_content)
{
        int fdn;
	int z = 0;

	if (filename == NULL)
		return (-1);

	fdn = open(filename, O_WRONLY | O_APPEND);
	if (fdn < 0)
		return (-1);
	if (text_content != NULL)
	{
		z = strlen(text_content);
		fdn = write(fdn, text_content, z);
		if (fdn < 0)
			return (-1);
	}
	return (1);
}
