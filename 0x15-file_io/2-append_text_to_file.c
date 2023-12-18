#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * append_text_to_file - app
 * @filename: file name
 * @text_content: content to be appended
 * Return: 1 || -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int chars;

	if (!filename)
		return (-1);
	if (text_content)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd < 0)
			return (-1);
		chars = write(fd, text_content, _strlen(text_content));
		if (chars != _strlen(text_content))
			return (-1);
	}
	close(fd);
	return (1);
}
