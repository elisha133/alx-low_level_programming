#include "main.h"

/**
  * _memset - Fill memmory with a constant byte
  * @s: Memory pointer
  * @n: The first nth bytes
  * @b: The constant byte
  *
  * Return: Pointer to memory s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
