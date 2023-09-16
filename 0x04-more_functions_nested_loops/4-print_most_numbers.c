#include "main.h"

/**
  * print_numbers - Print numbers from 0 to 9
  *
  * Return: Nothing.
  */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (!(c == 50 || c == 52))
			_putchar(c);

	}

	_putchar(10);
}
