#include "main.h"

/**
  * _strspn - Get the lenght of a prefix substring
  * @s: The string
  * @accept: The substring
  *
  * Return: Number of bytes in the initial segment of s.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ss;
	int i;

	ss = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				ss++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (ss);
			}
		}

		s++;
	}

	return (ss);
}
