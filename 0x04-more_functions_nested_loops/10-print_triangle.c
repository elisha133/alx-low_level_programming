#include "main.h"

/**
  * print_triangle - Print a triangle
  * @size: The size of the triangle
  *
  * Return: Nothing.
  */
void print_triangle(int size)
{
	int spc, hash;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (spc = size - hash; spac > 0; spc--)
				_putchar(32);

			for (spc = 0; spc < hash; spc++)
				_putchar(35);

			if (hash != size)
				_putchar(10);
		}
	}

	_putchar(10);
}
