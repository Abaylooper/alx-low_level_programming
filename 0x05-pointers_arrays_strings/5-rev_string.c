/**
 * rev_string - reverse the string
 * @s: is the string to be reversed
 * Return: the reversed string
 */

void rev_string(char *s)

{
	char *l = s;

	while (*l != '\0')
	{
		l++;
	}
	l--;
	while (s < l)
	{
		char temp = *s;

		*s = *l;
		*l = temp;
		s++;
		l--;
	}
}
