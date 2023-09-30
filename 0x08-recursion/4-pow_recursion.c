#include "main.h"

/**
  * _pow_recursion - Compute the power of a number raised to number
  * @x: The number
  * @y: The power
  *
  * Return: The power of x raised to y.
  * Otherwise return -1 if y is less than 0.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
