/**
 * _isalpha - checks if it is alpha
 * @c: is the letter to be checked
 *
 * Return: 1 if it is alphabet. 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
