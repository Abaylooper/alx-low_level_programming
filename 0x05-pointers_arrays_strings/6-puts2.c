#include "main.h"

/**
 * puts2 - used to print every other character
 * @str: is the string to be printed
 * Return: the value of the code
 */

void puts2(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);

		if (str[i] == '.')
			break;

	}
	_putchar('\n');
}
