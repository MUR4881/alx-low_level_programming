#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	char *p;
	
	p = "               what   the hell        ";
	char *ptr[10];
	ptr[10] = p;
	printf("%s\n", ptr[10]);
	return (0);
}
