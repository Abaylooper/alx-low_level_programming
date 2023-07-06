/**
 * swap_int - is a function that swaps two values
 * @a: is the first value
 * @b: is the second value
 * Return: no return point
 */

void swap_int(int *a, int *b)

{
	int temp = *a;

	*a = *b;
	*b = temp;
}
