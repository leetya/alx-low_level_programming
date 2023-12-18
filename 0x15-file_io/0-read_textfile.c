#include "main.h"

/**
 * read_textfile - rd
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t chars;
	ssize_t printed;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
		return (0);
	chars = read(fd, buff, letters);
	if (chars < 0)
		return (free(buff), 0);
	buff[chars] = '\0';
	close(fd);
	printed = write(STDOUT_FILENO, buff, chars);
	if (printed != chars)
		return (free(buff), 0);
	free(buff);
	return (chars);
}
