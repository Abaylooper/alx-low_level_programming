#include "main.h"

/**
 * _puts - desplays the character of string
 * @str: is the string to be printed
 * Return: the value
 */

void _puts(char *str)

{
	int i;
	int len;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
