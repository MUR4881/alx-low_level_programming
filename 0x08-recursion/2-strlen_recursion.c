/**
 * _strlen_recursion - get the length of a string using recursion
 * @s: the string
 * Return:  the length of the string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s)
		len++;
	else
		return (0);

	return (len + _strlen_recursion(&s[1]));
}
