/**
 * _strlen_recursion - prints the length of the string
 * @s: s is the string
 * Return: the len of string
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
