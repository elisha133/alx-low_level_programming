#include "main.h"

/**
  * _sqrt_recursion - Compute the natural square root of a number
  * @n: The number
  *
  * Return: Square root of n.
  * Otherwise return -1 if n has no natural sqrt.
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (hasSQRT(1, n));
}

/**
  * hasSQRT - Check if n has a natural square root
  * @a: Integer
  * @b: Integer
  *
  * Return: Integer.
  */
int hasSQRT(int a, int b)
{
	if (a * a == b)
		return (a);

	if (a * a > b)
		return (-1);

	return (hasSQRT(a + 1, b));
}
