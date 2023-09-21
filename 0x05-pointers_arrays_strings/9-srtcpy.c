#include "main.h"

/**
  * _strcpy - Copy a string from one memory location to anothor
  * @dest: The copied string destination
  * @src: The string source
  *
  * Return: The pointer to dest.
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
