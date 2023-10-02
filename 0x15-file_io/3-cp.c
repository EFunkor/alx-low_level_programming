#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define perm (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#include <stdio.h>

void checkfilefrom(int c, char **av);
void checkfileto(int c, char **av);
void checkclose(int c, int fd);

/**
 * checkfileto - to chk code
 * @c: No. of of argument sent to program
 * @av: array of ptrs to argument.
 */
void checkfileto(int c, char **av)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}


/**
 * checkfilefrom - to chk code
 * @c: the nmbr of argumets.
 * @av: the array of ptrs to argumentss
 */
void checkfilefrom(int c, char **av)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
}


/**
 * check_close - to chk code.
 * @c: the close value for file
 * @fld: file descriptor.
 */
void check_close(int c, int fld)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't close fld %d\n", fld);
		exit(100);
	}
}


/**
 * main - check the code
 * @ac: the nmbr of argumets.
 * @av: the arrayargument
 * Return: Always to 0.
 */
int main(int ac, char **av)
{
	int fld;
	int fld1;
	int fr;
	int fw;
	char buf[1024];
	int closev1;
	int closev2;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fld1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, perm);
	checkfileto(fld1, av);
	fld = open(av[1], O_RDONLY);
	checkfilefrom(fld, av);
	fr = read(fld, buf, 1023);
	checkfilefrom(fr, av);
	fw = write(fld1, buf, fr);
	checkfileto(fw, av);
	while (fr > 0)
	{
		fr = read(fld, buf, 1023);
		fw = write(fld1, buf, fr);
	}
	closev1 = close(fld);
	check_close(closev1, fld);
	closev2 = close(fld1);
	check_close(closev2, fld1);
	return (0);
}
