#include "main.h"

/**
 * puts2 - used to print every other character
 * @str: is the string to be printed
 * Return: the value of the code
 */

void puts2(char *str)

{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}


	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);


	}
	_putchar('\n');
}
