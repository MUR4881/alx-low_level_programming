#include <stdlib.h>

/**
 * recurse_length - finds the length of a string using recursion
 * @str: A pointer to the string
 * Return: the absolute size of the string in memory
 */
int recurse_length(char *str)
{
	int i;

	i = 1;
	if (*str)
		i += recurse_length(str + 1);
	return (i);
}
/**
 * recurse_duplicate - duplicates a string to new memory using recursion
 * @str: string to be duplicated
 * @t: pointer to the memory it will be duplicated to.
 */
void recurse_duplicate(char *str, char *t)
{
	*t = *str;
	if (*str)
		recurse_duplicate(&str[1], &t[1]);
}
/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *t;

	t = malloc(sizeof(char) * (recurse_length(str)));
	if (t == NULL || str == NULL)
		return (NULL);
	recurse_duplicate(str, t);
	return (t);
}
