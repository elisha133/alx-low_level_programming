#include "main.h"

/**
  * _isalpha - Check for alphabetic character
  * @c: The character to check
  *
  * Return: 1 if is alphabetic character.
  * Otherwise return 0.
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
