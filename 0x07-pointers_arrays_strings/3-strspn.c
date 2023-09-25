/**
 * _strspn - returns the number of byte in the initial segment of 's' which
 *consist of bytes from
 * @s: the string
 * @accept: the bytes to be searched for in @s
 * Return: the number of byte.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, count2;
	int index1, index2;

	count =  count2 = index1 = 0;
	for (; s[index1]; index1++)
	{
		for (index2 = count = 0; accept[index2]; index2++)
		{
			if (s[index1] == accept[index2])
			{
				count++;
				break;
			}
		}
		if (count)
			count2++;
		else
			break;
	}
	return (count2);
}
