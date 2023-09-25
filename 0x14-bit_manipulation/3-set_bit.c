/**
 * set_bit - at a given index to 1 at a given index
 * @index: bit's index starting from zero
 * @n: variable identifying the bits to be manipulated
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
