#include "main.h"

/**
 * _puts_recursion - is the function that prints characters
 * @s: is the argument to be printed
 * Return: no returns
 */

void _puts_recursion(char *s)

{


	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
