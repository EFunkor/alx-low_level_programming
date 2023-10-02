#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

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
	int nwf; /* New file rep */
	int z; /* for size rep */

	if (filename == NULL)
		return (-1);
	nwf = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (nwf < 0)
		return (-1);
	if (text_content != NULL)
	{
		z = strlen(text_content);
		nwf = write(nwf, text_content, z);
		if (nwf < 0)
			return (-1);
	}
	return (1);
}
