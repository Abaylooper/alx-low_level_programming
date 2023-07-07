#include <stdio.h>

/**
 * print_array - prints arrays in given
 * @a: is the parameter for array
 * @n: is the number given to be printed
 * Return: the value of the array
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
