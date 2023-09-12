/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: the value to be computed.
 * Return: the absolute value;
*/

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
