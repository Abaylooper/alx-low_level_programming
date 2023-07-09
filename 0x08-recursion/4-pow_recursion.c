/**
 * _pow_recursion - this makes power of the number
 * @x: the first parameter
 * @y: the second parameter
 * Return: 'x' the power of 'y'
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
