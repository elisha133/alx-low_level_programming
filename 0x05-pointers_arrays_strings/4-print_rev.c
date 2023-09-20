#include "main.h"

/**
  * print_rev - Print a stringg in reverse
  * @s: The string to print
  *
  * Return: Nothing.
  */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_printchar(*(s + i));
		i--;
	}
}
