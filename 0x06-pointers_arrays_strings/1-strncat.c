/**
 * _strncat - concatenate "src", to "dest" from it  0 index to n(maximum)
 * @dest: string to be concatinated to 
 * @src: string which will be concatinated
 * @n: the limit of concatination
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, c;

	len = 0;
	c = 0;
	for(;dest[len];len++);
	for(;c < n && src[c];c++)
		dest[len + c] = src[c];
	return (dest);
}
