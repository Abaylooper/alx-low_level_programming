#include "main.h"

/**
 * puts_half - prints the string more than half
 * @str: is the string to be printed
 * Return: no returns
 */

void puts_half(char *str)

{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = j / 2; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
