/**
 * _sqrt_recursion - this funcion calculates the square root of a number
 * @n: is the number which find the square root
 * Return: the value
 */

int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, n));
}

/**
 * _sqrt_helper - function helps the above
 * @n: is the number to find its square root
 * @i: is the second params
 * Return: the value
 */

int _sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (_sqrt_helper(n, i - 1));
	if (i * i == n)
		return (i);
	return (-1);
}
