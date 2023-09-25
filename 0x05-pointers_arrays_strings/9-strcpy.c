/**
 * _strcpy - the string src to dest
 * @dest: string buffer to be copied to
 * @src: the string whose content is bein copied
 */
char * _strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	for(;src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = src[n];
	return (dest);
}
