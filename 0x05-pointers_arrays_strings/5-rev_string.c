/**
 * rev_string - reverse the string characters
 * @s: the string to be reversed
 */
void rev_string(char *s)
{	
	char copy;
	int length, half, accessor;
	
	for (length = 0; s[length] != '\0'; length++);
	half = length / 2;
	length--;
	accessor = 0;
	while (half--)
	{
		copy = s[accessor];
		s[accessor] = s[length - accessor];
		s[length - accessor] = copy;
		accessor++;
	}
}
