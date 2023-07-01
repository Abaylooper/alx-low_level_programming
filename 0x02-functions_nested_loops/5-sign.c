#include "main.h"

/**
 * print_sign - prints positive or negetive on the number
 * @n: this number will be checked
 *
 * Return: 1 and '+' if greater than zero.if  0 and 0 otherwise 0 and '-'
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
