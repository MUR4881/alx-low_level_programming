/**
 * array_iterator - executes functions taking each element of array as parameter
 * @array: pointer to Array
 * @size: Of the array
 * action is a pointer  to the function to be used
 */
void array_iterator(int *array, int size, void (*action)(int))
{

		if ((size > 0))
		{
			size--;
			array_iterator(array, size, action);
		}

		action(array[size]);
}
