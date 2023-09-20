#include "main.h"

/**
  * _puts - Print a string
  * @s: The string to print
  *
  * Return: Nothing.
  */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}

	_putchar(10);
}
