#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number of times to be drawn
 * Return: the diagonal picture
 */

void print_diagonal(int n)

{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
	else
		_putchar('\n');
}
