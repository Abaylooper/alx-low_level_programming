#include "main.h"
/**
 * print_square - print's square of #
 * @size: in size of this parameter
 * Return: the shape
 */

void print_square(int size)

{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

