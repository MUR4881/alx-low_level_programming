#include "main.h"

/**
 * print_square - print diagonal to terminal , using specified magnitude where a magnitude is Hash.
 * @size: magnitude (the number of Hash)
 */
void print_square(int size)
{
	int length;
	int breadth;

	length = size;
	if (size > 0)
	{
		while (length > 0)
		{

			breadth = size;
			while (breadth > 0)
			{
				_putchar('#');
				breadth--;
			}
			_putchar(10);
			length--;
		}
	}
}
