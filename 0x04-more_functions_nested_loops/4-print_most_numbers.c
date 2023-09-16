#include "main.h"

/**
  * print_numbers - Print numbers from 0 to 9
  * Except 2 and 4
  *
  * Return: Nothing.
  */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);

	}

	_putchar(10);
}
