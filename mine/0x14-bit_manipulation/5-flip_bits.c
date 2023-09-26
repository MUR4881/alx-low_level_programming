/**
 * flip_bits - determines the number of bit to be flipped to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	short flips;

	x = 1;
	flips = 0;
	while (x <= (n ^ m))
	{
		if ((n ^ m) & x)
			flips++;
		x <<= 1;
	}
	return (flips);
}
