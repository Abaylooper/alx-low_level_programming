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
	int len;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
		len = j / 2;
	else
		len = (j + 1) / 2;

	for (i = len; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
