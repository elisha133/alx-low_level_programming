#include "main.h"

/**
  * _strstr - Locate a substring
  * @haystack: The string
  * @needle: The substring
  *
  * Return: Pointer to the located substring,
  * Otherwise NULL.
  */
char *_strstr(char *haystack, char *needle)
{
	int ss;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		ss = 0;
		if (haystack[ss] == needle[ss])
		{
			do {
				if (needle[ss + 1] == '\0')
					return (haystack);

				ss++;
			} while (haystack[ss] == needle[ss]);
		}

		haystack++;
	}

	return ('\0');
}
