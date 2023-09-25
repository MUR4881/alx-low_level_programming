/**
 * factorial - calculates the factorial of a given number
 * @n: the number to get its factorial
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
