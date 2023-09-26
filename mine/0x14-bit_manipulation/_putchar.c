#include <unistd.h>
/**
 * _putchar - prints a char to the screen using a syscall
 * @c: the char to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
