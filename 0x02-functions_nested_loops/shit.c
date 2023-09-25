#include <stdio.h>

int main(void)
{
	int p, z;

	p = 10;
	z = 20;

	printf("Formal value of Z: %d\n", z);
	printf("Formal value of P: %d\n", p);
	p = z;
	z = p;

	printf("New value of z: %d\n", z);
	printf("New value of p: %d\n", p);
	return (0);
}
