/**
 * _strstr - finds the first occurence the substring of the needle
 *in the haystack string
 * @haystack: the string being searched
 * @needle: the search pattern
 * Return: a pointer to the string of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int j, k, len;
	char *p;

	for (j = 0; haystack[j]; j++)
	{
		for (k = len = 0; needle[k]; k++)
		{
			if (haystack[j + k] == needle[k])
				len++;
			else
				break;
		}
		if (len == k && len != 0)
		{
			p = &haystack[j];
			break;
		}
		else
			p = '\0';

	}
	return (p);
}



