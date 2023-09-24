#include "main.h"

/**
  * cap_string - Capitalizes all words of a string
  * @str: The string
  *
  * Return: Pointer to the capitalized string.
  */
char *cap_string(char *str)
{
	int i, j;
	char a[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}

		i++;
	}

	return (str);
}
