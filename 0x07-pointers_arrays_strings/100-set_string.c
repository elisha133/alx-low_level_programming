#include "main.h"

/**
  * set_string - Set the value of a pointer to a char
  * @s: The pointer of a pointer
  * @to: The pointer to the character
  *
  * Return: Nothing.
  */
void set_string(char **s, char *to)
{
	*s = to;
}
