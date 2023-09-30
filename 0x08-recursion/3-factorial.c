#include "main.h"

/**
  * factorial - Compute the factorial of a given number
  * @n: The number
  *
  * Return: The factorial of n.
  * Otherwise return -1 if n less than 0.
  */
int factorial(int n)
{
	int f;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		f = n * factorial(n - 1);

	return (f);
}
