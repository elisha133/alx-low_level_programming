#include "main.h"

/**
  * is_palindrome - Check if a string is palindrome
  * @s: The string
  *
  * Return: 1 if s is palindrome.
  * Otherwise 0 if is not palindrome.
  */
int is_palindrome(char *s)
{
	int i;

	i = _stlen_recursion(s) - 1;

	return (check_palindrome(0, i, s));
}

/**
  * check_palindrome - Check if a string is a palindrome
  * @i: Integer
  * @j: Integer
  * @s: String
  *
  * Return: Integer.
  */
int check_palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	else if (*(s + i) != *(s + j))
		return (0);

	return (check_palindrome(i + 1, j - 1, s));
}

/**
  * _strlen_recursion - Compute the length of a string
  * @s: The string
  *
  * Return: The length of s.
  */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
