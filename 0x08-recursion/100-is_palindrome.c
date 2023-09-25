/**
 * strlen - gets the lenght of the string
 * @s: a pointer to the string
 * return: the length of the string
 */
int strlen(char *s)
{
	int len;

	len = 0;
	if (*s)
		len++
	else
		return (0);
	return (len + strlen(s[1]));
}
/**
 * compare_palindrome - compare string for palindrome
 * @s: the string
 * return: the length of palindrome
 */
int compare_palindrome(char *s, length)
{
/**
 * is_palindrome - determine if a given string is palindrome or not
 * @s: a pointer to the string
 * Return: 1 if the string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
}
