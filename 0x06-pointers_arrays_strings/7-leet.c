#include <stdio.h>
/**
 * leet - encode character of a string to 1337
 * @str: the string to be encoded
 * Return: the result of encoding
 */
char *leet(char *str)
{
	char *s;
	int m, o;
	int n[]  = {4, 3, 0, 7, 1};

	s = "aeotl";
	for (m = 0; str[m]; m++)
	{
		for (o = 0; s[o]; o++)
		{
			if (str[m] == s[o] || str[m] - 32 == s[o])
				str[m] = n[o] + '0';
		}
	}
	return (str);
}
