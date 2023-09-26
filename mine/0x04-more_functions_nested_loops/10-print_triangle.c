#include "main.h"

/**
 * print_triangle - print triangle to screen
 * @size: the base and height ( the number of #s)
 */
void print_triangle(int size)
{
	int height, base, hashno;

	if (size > 0)
	{

		height = size;
		hashno = 1;
		for (;height > 0; height--)
		{
			base = size;
			for(;base > 0;base--)
			{
				if ( base > hashno)
				_putchar(' ');
				else
					_putchar('#');
			}
			hashno++;
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

