/**
 * _Strlen - is the function that return the length of string
 * @s: is the string whose length is required
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
