#include "main.h"

/**
 * jack_bauer - is function that counts hours in day
 * Return: hours in a day
 */

void jack_bauer(void)

{
	int hour;

	for (hour = 0; hour < 24; hour++)
	{
		int minute = 0;

		while (minute < 60)
		{
			if (hour < 10)
				_putchar('0');

			_putchar(hour + '0');
			_putchar(':');
			if (minute < 0)
				_putchar('0');

			_putchar(minute + '0');
			_putchar('\n');

			minute++;
		}
	}
}
