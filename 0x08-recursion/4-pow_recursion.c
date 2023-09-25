/**
 * _pow_recursion - raises x to it y power
 * @x: the operand
 * @y: the operator
 * Return: the result of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
