#include "main.h"

/**
  * _strchr - Locate a character in a string
  * @s: The string
  * @c: The character
  *
  * Return: Pointer to character c in s,
  * Otherwise NULL.
  */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			break;
		}
	} while (*s++);

	return (s);
}
