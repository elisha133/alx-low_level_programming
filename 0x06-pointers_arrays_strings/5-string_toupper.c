#include "main.h"

/**
  * string_toupper - Changes all lowercase letters of a string
  * to uppercase
  * @str: The string
  *
  * Return: Pointer to the converted string.
  */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 'a' - 'A';

		i++;
	}

	return (str);
}
