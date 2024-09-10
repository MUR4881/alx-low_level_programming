#include "main.h"
/**
 * string_nconcat - to concatenate two strings
 * @s1: our first string
 * @s2: Our second string
 * @n: index
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *panda;
	unsigned int d1, d2, dkin, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (d1 = 0; s1[d1] != '\0'; d1++)
		;
	for (d2 = 0; s2[d2] != '\0'; d2++)
		;

	if (n > d2)
		n = d2;

	dkin = d1 + n;

	panda = malloc(dkin + 1);

	if (panda == NULL)
		return (NULL);

	for (i = 0; i < dkin; i++)
		if (i < d1)
			panda[i] = s1[i];
		else
			panda[i] = s2[i - d1];

	panda[i] = '\0';

	return(panda);
}
