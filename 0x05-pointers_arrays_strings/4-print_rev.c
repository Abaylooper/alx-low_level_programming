#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s: is the string to be reversed
 * Return: the code
 */

void print_rev(char *s)

{
	int len = 0;
	int j;


	while (s[len] != '\0')
	{
		len++;

	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}


	_putchar('\n');
}
