#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void checkfileto(int s, char **av);
void checkfilefrom(int s, char **arvg);
void checkclose(int s, int fd);

/**
 * checkfileto - for checking the code
 * @s: for the nmbr of args
 * @argv: repr. the args
 */
void checkfileto(int c, char **av)
{
	if (s < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * checkfilefrom - for check on the code
 * @s: the NUMR of args
 * @argv: the args ptrs
 */
void checkfilefrom(int s, char **argv)
{
	if (s < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}


/**
 * checkclose - checker forthe code
 * @s: the close value
 * @fd: the file descriptor
 */
void checkclose(int c, int fd)
{
	if (s < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - check the code
 * @ac: the NBR of args
 * @argv: the args pointers to argument
 * Return: When result is Always 0.
 */
int main(int ac, char **argv)
{
	int fd;
	int fd1;
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
	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, perm);
	checkfileto(fd1, argv);
	fd = open(argv[1], O_RDONLY);
	checkfilefrom(fd, argv);
	fr = read(fd, buf, 1023);
	checkfilefrom(fr, argv);
	fw = write(fd1, buf, fr);
	checkfileto(fw, argv);
	while (fr > 0)
	{
		fr = read(fd, buf, 1023);
		fw = write(fd1, buf, fr);
	}
	closev1 = close(fd);
	checkclose(closev1, fd);
	closev2 = close(fd1);
	checkclose(closev2, fd1);
	return (0);
}
