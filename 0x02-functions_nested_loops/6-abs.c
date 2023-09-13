#include "main.h"

/**
  * _abs - Compute absolute value of an integer
  * @n: The integer
  *
  * Return: Absolute value of n.
  */
int _abs(int n)
{
	if (n < 0)
		return (((n) * (-1)));

	return (n);
}
