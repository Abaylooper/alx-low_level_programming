#include "main.h"

/**
 * print_last_digit - function prints the last digit of the number
 * @n: is the number to printed it is last digit
 *
 * Return: "num" after execution
 */

int print_last_digit(int n)

{
	int num;

	num = n % 10;
	if (num < 0)
		num = num * -1;
	_putchar(num + '0');

	return (num);

}
