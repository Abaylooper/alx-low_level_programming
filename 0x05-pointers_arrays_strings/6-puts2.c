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
		if (str[i] == '\\' && str[i + 1] == '0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
