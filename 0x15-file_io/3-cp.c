#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * print_error - prints an error message to stderr.
 * @exit_code: exit code to return.
 * @format: format string for the error message.
 * @arg: argument for the format string.
 */
void print_error(int exit_code, const char *format, const char *arg)
{
dprintf(2, format, arg);
exit(exit_code);
}

/**
 * close_fd - closes a file descriptor and handles errors.
 * @fd: file descriptor to close.
 */
void close_fd(int fd)
{
if (close(fd) == -1)
print_error(100, "Error: Can't close fd %d\n", fd);
}

/**
 * handle_args - checks command line arguments.
 * @ac: argument count.
 * @av: argument values.
 */
void handle_args(int ac, char **av)
{
if (ac != 3)
print_error(97, "Usage: %s file_from file_to\n", av[0]);
}

/**
 * copy_file - copies the content of one file to another.
 * @file_from: source file name.
 * @file_to: destination file name.
 */
void copy_file(const char *file_from, const char *file_to)
{
int from_fd, to_fd;
ssize_t rsize, wsize;
char buffer[1024];

from_fd = open(file_from, O_RDONLY);
if (from_fd == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);

to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (to_fd == -1)
{
close_fd(from_fd);
print_error(99, "Error: Can't write to %s\n", file_to);
}

while ((rsize = read(from_fd, buffer, sizeof(buffer))) > 0)
{
wsize = write(to_fd, buffer, rsize);
if (wsize != rsize)
{
close_fd(from_fd);
close_fd(to_fd);
print_error(99, "Error: Can't write to %s\n", file_to);
}
}

if (rsize == -1)
{
close_fd(from_fd);
close_fd(to_fd);
print_error(98, "Error: Can't read from file %s\n", file_from);
}

close_fd(from_fd);
close_fd(to_fd);
}

/**
 * main - Entry point for the program.
 * @ac: argument count.
 * @av: argument values.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
handle_args(ac, av);
copy_file(av[1], av[2]);
return (0);
}
