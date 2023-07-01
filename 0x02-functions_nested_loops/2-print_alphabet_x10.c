#include "main.h"

/**
 * print_alphabet_x10 -writes a lowercase alphabet 10 times
 * Return: Success 0
 */

void print_alphabet_x10(void)

{
	int a = 1;
	char c;

	while (a <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		a++;
	}
}
