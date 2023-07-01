/**
 * _islower - check if the charachter is lowercase
 * @c: is the charachter to be checked
 *
 * Return: 1 if letter is lowercase. 0 otherwise
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
