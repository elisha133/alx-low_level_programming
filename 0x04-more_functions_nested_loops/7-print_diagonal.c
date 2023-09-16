#include "main.h"

/**
  * print_diagonal - Draw a diagonal line on the terminal
  * @n: The length of the diagonal line in '\'
  *
  * Return: Nothing.
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(32);

			_putchar(92);

			if (i != (n - 1))
				_putchar(10);

		}

	}
	_putchar(10);
}
