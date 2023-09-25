#include <stdio.h>

/**
 * main - prints the highest prime factor of 612852475143.
 */
int main(void)
{
	int unsigned long   n, hpf;
	int unsigned long  iteration1, iteration2, count;

	n = 612852475143LU;
	for (iteration1 = 2; iteration1 <= 306426237572; iteration1++)
	{
		if ((n % iteration1) == 0)
		{	
			count = 0;
			for (iteration2 = 2; iteration2 <= iteration1; iteration2++)
			{
				if ((iteration1 % iteration2) == 0)
				{
					count++;
				}
			}
			if (count == 1)
				hpf = iteration1;
		}
		else
			continue;
	}
	printf("%lu\n", hpf);
	return (0);
}
