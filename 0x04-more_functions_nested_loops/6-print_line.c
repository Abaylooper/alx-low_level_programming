#include "main.h"
/**
 * print_line - prints line n times
 * @n: is the number of times
 * Return: line
 */

void print_line(int n)

{
	int i;

	if (n > 0)
		for (i = 1; i <= n; i++)
			_putchar('_');
	_putchar('\n');

}
