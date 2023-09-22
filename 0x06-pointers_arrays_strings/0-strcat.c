#include "main.h"

/**
  * _strcat - Concatenate two string
  * @dest: The first string
  * @src: The second string
  *
  * Return: Pointer to dest.
  */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
