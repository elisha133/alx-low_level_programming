#include "main.h"

/**
  * _strlen - Return the length of a string
  * @s: The string
  *
  * Return: The length of s (Success).
  */
void _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\n')
		i++;

	return (i);
}
