#include "main.h"

/**
  * _strpbrk - Searche a string for any of a set of bytes
  * @s: The string
  * @accept: The substring to search for
  *
  * Return: Pointer to the byte in s that matches on of
  * bytes in accept, otherwise return NULL.
  */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);

		}

		s++;
	}

	return ('\0');
}
