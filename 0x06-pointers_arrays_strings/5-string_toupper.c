/**
 * string_toupper - convert all lower case of a string to upper
 * @s: the given string
 * Return: the string
 */
char *string_toupper(char *s)
{	
	int n;

	n = 0;
	for(;s[n];n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = (((s[n] - '0') - 32) + '0');
		else
			continue;
	}
	return (s);
}

