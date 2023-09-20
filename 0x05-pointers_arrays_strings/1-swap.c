#include "main.h"

/**
  * swap_int - Swap two integers
  * @a: The first integer
  * @b: The second integer
  *
  * Return: Nothing.
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
