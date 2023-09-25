/**
 * _strncpy - copies "src", to "dest" from it  0 index to n(maximum)
 * @dest: string to be copied to 
 * @src: string which will be copied
 * @n: the limit of characters to be copied starting from 0
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for(c = 0;c < n;c++)
	{
		if (!(src[c]))
		{
			dest[c] = '\0';
			break;
		}
		else
			dest[c] = src[c];
	}

	return (dest);
}
