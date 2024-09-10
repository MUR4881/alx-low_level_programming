/**
 * _strpbrk - locates the first occurence in the string 's' of any of the
bytes in the string *accept*
 * @s: the string to be searched through
 * @accept: the values being searched for
 * Return: pointer to first  occurence of any char of *accept* in *s*
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *n;

	n = '\0';
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				return (&s[i]);
		}
	}
	return (n);
}
