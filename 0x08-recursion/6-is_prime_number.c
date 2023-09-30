#include "main.h"

/**
  * is_prime_number - Check if a number is prime number
  * @n: The number
  *
  * Return: 1 if is prime number.
  * Otherwise return 0 if is not prime number.
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (hasPrime(2, n));
}

/**
  * hasPrime - Check if n is prime
  * @a: Integer
  * @b: Integer
  *
  * Return: Integer.
  */
int hasPrime(int a, int b)
{
	if (a < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);

	return (hasPrime(a + 1, b));
}
