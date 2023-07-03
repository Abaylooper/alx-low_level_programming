/**
 * _isdigit -check if it is digit or not
 * @c: is the digit to be checked
 * Return: 1 if it is digit. otherwise 0.
 */
int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
