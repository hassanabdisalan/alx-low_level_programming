#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters it could read and print,
* or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rsize, wsize;
char *s;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
s = malloc(sizeof(char) * letters);
if (!s)
{
close(fd);
return (0);
}
rsize = read(fd, s, letters);
if (rsize == -1)
{
free(s);
close(fd);
return (0);
}
wsize = write(STDOUT_FILENO, s, rsize);
free(s);
close(fd);
if (wsize != rsize)
return (0);
return (wsize);
}
