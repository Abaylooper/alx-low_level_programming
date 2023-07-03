#include "main.h"

/**
 * print_triangle - prints the shape of triangle
 * @size: indicate the required shape of triangle
 * Return: Entry point
 */

void print_triangle(int size)

{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= size - j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
