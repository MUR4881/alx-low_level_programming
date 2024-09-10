/**
 * swap_int - swap the value of two given int
 * @a: address of operand1
 * @b: address of  operand2
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
