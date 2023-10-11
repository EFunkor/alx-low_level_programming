#include "main.h"

/**
 * read_textfile - fxn which reads a text file and prints to POSIX stdout
 * @letters: nmbr of letters it will read and print.
 * @filename: File name to be read, or opened.
 * Return: numby,  number of letters it  read and print or 0 on error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* variables declaring listed */
	char *buffer; /* buffer storing the read data */
	ssize_t fldp; /* file descr on the opened file */
	ssize_t numby;  /* number of bytes written to STDOUT */
	ssize_t Z; /* number of bytes read from the file */

	/* to opening the file for reading */
	fldp = open(filename, O_RDONLY);
	if (fldp == -1)
		return (0); /* return 0 if file fails to open */

	/* memory allocating for the buffer */
	buffer = malloc(sizeof(char) * letters);

	/* to read data in file into the buffer */
	Z = read(fldp, buffer, letters);

	/* to write read data to the STDOUT */
	numby = write(STDOUT_FILENO, buffer, Z);

	/* free allocated memmory */
	free(buffer);
	close(fldp);

	return (numby);
}
