#include <stdlib.h>

/**
 * _length - gets the length of the given string
 * @s: the given the string
 * Return: the total length of the string
 */
int _length(char *s)
{
	if (!(*s))
		return (1);
	return (1 + _length(s + 1));
}
/**
 * string_nconcat - conatinated n bytes of S2 to s1
 * @s1: the string to be concatinated to
 * @s2: the string whose n bytes is to be concatined to s1
 * @n: the number of s2 bytes to be allocated
 * Return: pointer to the new string, OR NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	__attribute__((unused)) int l3, l1, l2, iterator, iterator2;
	char *s;

	l1 = l2 = 0;
	if (s2 == NULL)
		s2 = "";
	l1 = _length(s1) - 1;
	l2 = _length(s2);
		if ((int) n >= l2 - 2)
			l3 = l1 + l2;
		else
			l3 = l1 + n;
	s = malloc((l3) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (iterator = iterator2 =  0; iterator <= l3; iterator++)
	{
		if (iterator <  l1)
			s[iterator] = s1[iterator];
		else
		{
			s[iterator] = s2[iterator2];
			iterator2++;
		}
	}
	if (*s2 != '\0')
		s[iterator + 1] = '\0';
	return (s);
}
