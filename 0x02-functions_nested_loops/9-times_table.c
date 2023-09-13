#include "main.h"

/**
  * times_table - Print the 9 times table, starting from 0
  *
  * Return: Nothing.
  */
void times_table(void)
{
	int i, j;
	int div, rem, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			div = mul / 10;
			rem = mul % 10;
			if (div > 0)
				_putchar(div + '0');
			else if (i != 0 && div < 0)
				_putchar(32);

			_putchar(rem + '0');
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}
		_putchar(10);
	}
}
