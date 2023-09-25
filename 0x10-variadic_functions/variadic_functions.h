#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct function_pointers - a struct for format and and function
 * @format: the format specifier
 * @funct: the pointer to the function of required format
 */
typedef struct function_pointers {
	char *format;
	void (*b)(va_list v);
}ops;
#endif
