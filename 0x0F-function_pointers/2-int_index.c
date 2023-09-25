/**
 * int_index - searches for an integer in  a given array
 * @array: pointer to the array
 * @size: of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the integer or -1 or not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
