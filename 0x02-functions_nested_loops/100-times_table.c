#include "main.h"

/**
  * print_times_table - Print n times table,
  * starting with 0
  * @n: The table daimention
  *
  * Return: Nothing.
  */
void print_times_table(int n)
{
	int i, j, mul;

	if (n >= 0 && n <= 15)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar(48);

		for (j = 1; j <= n; j++)
		{
			_putchar(44);
			_putchar(32);

			mul = i * j;

			if (mul <= 99)
				_putchar(32);
			if (mul <= 9)
				_putchar(32);

			if (mul >= 100)
			{
				_putchar((mul / 100) + 48);
				_putchar((mul / 10) % 10 + 48);
			}
			else if (mul <= 99 && mul >= 10)
				_putchar((mul / 10) + 48);

			_putchar((mul % 10) + 48);
		}
		_putchar(10);
	}
}
