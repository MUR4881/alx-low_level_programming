/**
 * cap_string - capitalize the first char of each world
 * @s: given string
 * Return: the converted string
 */
char *cap_string(char *s)
{
	int index1, index2;
	char *t = ",;.!?\"(){}\t\n\v ";

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; t[index2]; index2++)
		{
			if (s[index1] == t[index2])
			{
				if (s[index1 + 1] >= 'a' && s[index1 + 1] <= 'z')
					s[index1 + 1] = s[index1 + 1] - 32;
			}
			else
				continue;
		}
	}
	return (s);
}


