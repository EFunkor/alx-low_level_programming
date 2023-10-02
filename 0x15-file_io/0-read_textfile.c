#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


/**
 * read_textfile - check the code to print to STDOUT
 * @filename: the file name that wll be read.
 * @letters: the nbr of letters to read
 * Return:  the right nbr of bytes read and written, Null, 0 if error
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t fldesc;
	ssize_t refil;
	ssize_t let = (ssize_t)letters;
	int readit;

	buffr = malloc(letters);
	if (buffr == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fldesc = open(filename, O_RDONLY);
	if (fldesc < 0)
		return (0);
	readit = read(fldesc, buffr, letters);
	if (readit < 0)
		return (0);

	refil = write(1, buffr, letters);

	if (fldesc < 0 || refil < 0 || refil < let)
		return (0);
	
	free(buffr);
	close(fldesc);
	return (refil);
}
