/**
 * _pow_recursion - Performs power of a number
 * @x: Integer Value
 * @y: Power Value
 * Return: Factorial
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y > 0)
			return (x * (_pow_recursion(x, y - 1)));
		else
			return (1);
	}
}
