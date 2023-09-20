#include "main.h"

/**
  * _strlen - Return the length of a string
  * @s: The string
  *
  * Return: The length of s (Success).
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i = i + 1;

	return (i);
}
