/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the variable identifying the sequence of bits
 * @index: the index of the bit, which starts at zero
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
