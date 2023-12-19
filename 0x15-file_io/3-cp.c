#include "main.h"

/**
 * close_error - helper fun
 * @fd_closed: close status
 * @fd: fd
*/

void	close_error(int fd_closed, int fd)
{
	if (fd_closed < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * _error - helper to print the error
 * @error: error msg
 * @filename: file name
 * @exit_status: exit status
*/

void	_error(char *error, char *filename, int exit_status)
{
	dprintf(STDERR_FILENO, error, filename);
	exit(exit_status);
}

/**
 * main - a program that copies the content of a file to another file.
 * @ac: args count
 * @av: args val
 * Return: 0 || -1
*/

int main(int ac, char **av)
{
	int fd_in, fd_out, fd_closed, chars, writes;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_in = open(av[1], O_RDONLY);
	if (fd_in < 0)
		_error("Error: Can't read from file\n", av[1], 98);
	fd_out = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_out < 0)
		_error("Error: Can't write to\n", av[2], 99);
	buff = malloc(sizeof(char) * 1025);
	if (!buff)
		return (-1);
	while (1)
	{
		chars = read(fd_in, buff, 1024);
		if (!chars)
			break;
		if (chars < 0)
			return (free(buff), -1);
		buff[chars] = '\0';
		writes = write(fd_out, buff, chars);
		if (chars != writes)
			return (free(buff), -1);
	}
	free(buff);
	fd_closed = close(fd_out);
	close_error(fd_closed, fd_out);
	fd_closed = close(fd_in);
	close_error(fd_closed, fd_in);
	return (0);
}
