#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments given to a program
 * @ac: the number of arguments
 * @av: an array of the arguments
 * Return: pointer to new string or NULL indicating failure or infeasibility
 */
char *argstostr(int ac, char **av)
{
	int length, total_size, index1, index2;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (total_size = index1 = 0; index1 < ac; index1++)
	{
		for (index2 = 0; av[index1][index2]; index2++);
		total_size += index2 + 1;
	}
	new_string = malloc (total_size * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	for ( index1 = length = 0; index1 < ac; index1++)
	{
		for (index2 = 0; av[index1][index2]; index2++, length++)
			new_string[length] = av[index1][index2];
		new_string[length] = '\n';
		length++;
	}
	return (new_string);
}
