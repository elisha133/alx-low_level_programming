#include "main.h"

/**
  * puts_half - Print second half of a string
  * @str: The string to print
  *
  * Return: Nothing.
  */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	if ((i % 2) != 0)
		i = i - ((i - 1) / 2);
	else
		i = i / 2;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar(10);
}
