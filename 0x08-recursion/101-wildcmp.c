#include "main.h"

/**
  * wildcmp - Check if two strings are identical
  * @s1: The first string
  * @s2: The second string
  *
  * Return: 1 if s1 and s2 are identical.
  * Otherwise return 0 is they are not identical.
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, (s2 + 1)));
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, (s2 + 1)));
		else if (wildcmp(s1, s2 + 1))
			return (1);

		return (wildcmp(s1 + 1, s2));
	}

	return (0);
}
