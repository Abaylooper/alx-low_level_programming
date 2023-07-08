#include "main.h"

/**
 * _print_rev_recursion - prints in reverse directioin
 * @s: is the string to be reversed
 * Return: no return value
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
