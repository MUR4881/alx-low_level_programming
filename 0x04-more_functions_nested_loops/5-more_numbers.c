#include "main.h"

/**
 * more_numbers - print 0 - 14 X10 
 */
void more_numbers(void)
{
	int a;
	int b;
	int c;
	int d;

	for (b = 1; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				d = a / 10;
				for (c = 1; c <= 2; c++)
				{
					_putchar(d + '0');
					d = a % 10;
				}
			}
			else
				_putchar(a + '0');
		}
		_putchar(10);
	}
}	

