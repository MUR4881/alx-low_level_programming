/**
 * _sqrt - get the perfect-square-root of the given number if any
 * @n: the number
 * @m: set of perfect roots
 * Return: the perfect root
 */
int _sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);
	else
		return (_sqrt(n, ++m));
}

/**
 * _sqrt_recursion - gets the perfect square-root of a given integer
 * @n: the number
 * Return: the natural square-root or -1 if 'n' has no natural square-root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
