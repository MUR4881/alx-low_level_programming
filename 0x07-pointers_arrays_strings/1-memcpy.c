/**
 * _memcpy - copies 'n' bytes from memory area src to memory area dest
 * @dest: is to be copied to
 * @src: is to be copied from
 * @n: the bytes of src to be copied
 * Return: pointer to edited dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
