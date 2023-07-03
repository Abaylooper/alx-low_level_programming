#include "main.h"

/**
 * more_numbers - prints numbers 1 to 14 ten times
 * Return: the value
 */

void more_numbers(void)

{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}

			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
