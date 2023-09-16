#include "main.h"

/**
  * _isdigit - Check for digit(0 through 9)
  * @c: The character to check
  *
  * Return: 1 if c is digit character
  * Otherwise return 0.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
