#include "main.h"

/**
  * puts2 - Print every other character of a string,
  * starting with the first character
  * @str: The string to print
  *
  * Return: Nothing.
  */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	j = 0;
	while (j <= (i - 1))
	{
		if (j % 2 == 0)
			_putchar(*(str + j));

		j++;
	}
}
