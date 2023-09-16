#include "main.h"

/**
  * print_line - Draw a straight line in the terminal
  * @n: The length of the line in '_'
  *
  * Return: Nothing.
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar(10);
}
