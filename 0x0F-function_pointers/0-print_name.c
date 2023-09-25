/**
 * print_name - a function that prints name using function pointer.
 * @name: the string to be printed
 * @f: the pointer to the function to print the string
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
