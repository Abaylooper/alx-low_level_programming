#include "main.h"

/**
 * _puts - desplays the character of string
 * @str: is the string to be printed
 * Return: the value
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
