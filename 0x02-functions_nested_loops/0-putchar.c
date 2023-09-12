#include "main.h"

/**
 * _putchar - print a char to the stdout
 * @c: the char to be printed.
*/

void	_putchar(int c)
{
	write(1, &c, 1);
}

/**
 * ft_puts - print a string to the stdout
 * @str: the string to be printed.
*/

void	ft_puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

/**
* main - this is the entry point
* Description: this is a program that print a string.
* Return: the function always returns 0.
*/

int main(void)
{
	ft_puts("_putchar");
	return (0);
}
