/**
 * get_bit - get the value of a bit at a given index
 * @n: the value in memory
 * @index: the index of the bit starting from 0
 * Return: the value at that index, either 0 and 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}

