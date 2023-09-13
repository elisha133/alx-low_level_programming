#include "main.h"

/**
  * print_alphabet_x10 - Print 10 times the alphabet, in lovercase
  *
  * Return: Always nothing (Success)
  */
void print_alphabet_x10(void)
{
	int i;
	int chr;

	for (i = 0; i < 10; i++)
	{
		for (chr = 97; chr <= 122; chr++)
		{
			_putchar(chr);
		}

		_putchar(10);
	}
}
