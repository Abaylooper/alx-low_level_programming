/**
 * _strcpy - is used for copy
 * @dest: is the parameter
 * @src: is the second parameter
 * Return: the reversed
 */



char *_strcpy(char *dest, char *src)

{
char *temp = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (temp);
}
