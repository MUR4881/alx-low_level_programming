#include <stdlib.h>
#include <stdio.h>

/**
 * recurse_length - gets the total number of char of a string that is not space
 * @str: the string to find it length
 * Return: length of the string
 */
int recurse_length(char *str)
{
	int length;

	length = 0;
	if (str[0] != ' ')
	{
		length += 1;
		if (str[1] == ' ')
			length +=1;
	}
	if (str[0] == '\0')
		return (length);
	return (length + recurse_length(str + 1));
}
/**
 * array_size - gets the size of the pointers array
 * @size: the string to be gone through
 * Return: the size
 */
int array_size (char *size, int length)
{
	int index,  total;
	total = 1;
	for (index = 0; index <= length; index++)
	{
		if (size[index] == '\0')
			total++;
	}
	return (total);
}
/**
 * strtow - splits strings into words
 * @str: the string to be splited
 * Return: pointer to an array of the splitted string
 */
char **strtow(char *str)
{
	int length, length2, index, index2;
	char *size, **sizer;

	if (str == NULL)
		return (NULL);
	length = recurse_length(str);
	size = malloc(length * sizeof(char));
		if (size == NULL)
			return (NULL);
	for (index = index2 =  0; index <= length; index++)
	{
		if (str[index] == ' ')
			continue;
		size[index2] = str[index];
		putchar(str[index]);
		index2++;
		if (str[index + 1] == ' ')
			{
				size[index2] = '\0';
				index2++;
			}
		}
	}
	length2 = array_size(size, length);
	sizer = malloc(length2 * sizeof(char *));
	if (sizer == NULL)
		return (NULL);
	sizer[0]  = size;
	for (index = index2 = 0; index < length; index++)
	{
		if (index == 0)
		{
			sizer[index2] = size;
			index2++;
		}
		else if (index == length)
			sizer[index2] = NULL;
		else if (size[index] == '\0')
		{
			sizer[index2] = (size + (index + 1));
			index2++;
		}
	}
	for (index = 0; index <= index2; index++)
	{
		printf("%d\n", index);
		if (*sizer[index] == ' ')
			printf("space");
		else
			printf("%s\n", sizer[index]);
	}
	return (sizer);
}
