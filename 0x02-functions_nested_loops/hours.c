#include "main.h"
void print(int number)
{
	_putchar((number / 10) + '0');
	_putchar((number % 10) + '0');
}


int main(void)
{
	int hour, min;
	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			print(hour);
			_putchar(':');
			print(min);
			_putchar('\n');
		}
	}
}

