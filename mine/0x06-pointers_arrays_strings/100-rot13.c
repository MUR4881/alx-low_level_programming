/**
 * rot13 - converts a char of a string to it ROT13
 * @str: the string to be rot13ed
 * Return: the roted string;
 */
char *rot13(char *str)
{
	int n;

	n = 0;
	for (; str[n]; n++)
	{
		while ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
		{
			if ((str[n] > 'M' && str[n] <= 'Z') || (str[n] > 'm'))
				str[n] = (((str[n] - '0') - 13) + '0');
			else
				str[n] = str[n] + 13;
			break;
		}

	}
	return (str);
}


