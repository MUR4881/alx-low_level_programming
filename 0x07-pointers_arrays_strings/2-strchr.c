/**
 * _strchr - returns the first occurence of a given character in a string
 * @s: the string
 * @c:the searched for
 * Return: the first occurence of char c
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = '\0';
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	return (p);
}

