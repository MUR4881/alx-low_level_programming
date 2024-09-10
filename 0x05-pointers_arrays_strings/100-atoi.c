#include <stdio.h>
/**
 * _atoi - convert number in a string to integer
 * @s: the variable which holds the string
 * Return: the number or 0 (zero) if there are no number in the string
 */
int _atoi(char *s)
{
	 int v, m, count;
	m = 0;
	count = 0;
	v = 0;
	while (s[m] != '\0')
	{
		if (s[m] == '-' && (s[m + 1] >= '0' && s[m + 1] <= '9'))
			count++;

		 else if (s[m] >= '0' && s[m] <= '9')
		{
			v *= 10;
			v += s[m] - '0';
			if (!(s[m + 1] >= '0' && s[m + 1] <= '9'))
				break;
		}
		 m++;
	}
	if (count)
		v = -v;
	return (v);
}

