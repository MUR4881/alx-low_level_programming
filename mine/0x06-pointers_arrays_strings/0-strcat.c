/**
 * _strcat - concatenate "src", to "dest"
 * @dest: string to be concatinated to 
 * @src: string which will be concatinated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, n;

	len = 0;
	n = 0;
	for(;dest[len];len++);
	for(;src[n];n++)
		dest[len + n] = src[n];
	dest[len + n] = src[n];
	return (dest);
}
