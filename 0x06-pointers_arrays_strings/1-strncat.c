#include "main.h"

/**
  * _strncat - Concatenate two strings
  * @dest: The first string
  * @src: The second string
  * @n: Number of characters to concatenate
  *
  * Return: Pointer dest.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
