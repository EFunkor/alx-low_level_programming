#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints to POSIX stdout
 * @letters: number of letters it will read and print.
 * @filename: name of the file being read or opened.
 * Return: nL, actual number of letters it could read and print or 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* list of Variables that are been declared */
	char *buffer; /* buff for read data stored */
	ssize_t fldesc; /* file Descriptor */
	ssize_t NL;  /* bytes nbr written to STDOUT */
	ssize_t Z; /* nbr of bytes that are read in that file */


	fldesc = open(filename, O_RDONLY);
	if (fldesc == -1)
		return (0); /* 0 if file wont open */

	/* buffer memory alloc described */
	buffer = malloc(sizeof(char) * letters);

	/* read data from file into the buffer */
	Z = read(fldesc, buffer, letters);

	/* to write the read data for the STDOUT */
	NL = write(STDOUT_FILENO, buffer, Z);

	/* free allocated memmory */
	free(buffer);
	close(fldesc);

	return (NL);
}
