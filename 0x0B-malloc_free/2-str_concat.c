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
 * str_concat - duplicates a string
 * @s1: the string to be duplicated and concatinated
 * @s2: a string to be duplicated and concatinated
 * Return: A pointer to the duplicated string
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = recurse_length(s1) - 1;
	l2 = recurse_length(s2);
	t = malloc(sizeof(char) * (l1 + l2));
	if (t == NULL)
		return (NULL);
	recurse_duplicate(s1, t);
	recurse_duplicate(s2, (t + l1));
	return (t);
}
