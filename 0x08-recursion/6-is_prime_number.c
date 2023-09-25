/**
 * prime_checker - check for the prime_number
 * @n: the number to be checked
 * @c: half (1/2) of n
 * Return: 1 if the input integer is a prime_number but 0 if otherwise
 */
int prime_checker(int n, int c)
{
	int a;

	a = 0;
	if (c == 1 || c <= 0)
		return (0);
	else if (n % c == 0)
		a++;
	 return (a + prime_checker(n, --c));
}
/**
 * is_prime_number - check if an integer is a prime_number
 * @n: the number being checked
 * Return: 1 if the input integer is a prime_number but 0 otherwise
 */
int is_prime_number(int n)
{
	int v;

	v = prime_checker(n, n);
	if (v == 1)
		return (1);
	else
		return (0);
}
