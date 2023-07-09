/**
 * _sqrt_recursion - this funcion calculates the square root of a number
 * @n: is the number which find the square root
 * @i: is the second number
 * Return: the value
 */

int _sqrt_helper(long int n, long int i);

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

int _sqrt_helper(long int n, long int i)
{
	if (i == n)
		i = i / 2;

	if (i * i == n)
		return (i);
	if (i * i > n)
	{
		return (_sqrt_helper(n, i - 1));
	}
	return (-1);
}
