#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: The first string
  * @src: The second string
  * @n: The number of charavters to copy
  *
  * Return: Pointer to dest.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while ()
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
