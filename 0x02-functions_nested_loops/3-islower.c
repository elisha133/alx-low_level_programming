#include "main.h"

/**
  * _islower - Check for lowercase character
  * @c: The character to check
  *
  * Return: 1 if is lowercase character.
  * Otherwise return 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}