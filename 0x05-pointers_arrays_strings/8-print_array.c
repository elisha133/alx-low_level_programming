#include "main.h"
#include <stdio.h>

/**
  * print_array - Print nth elements of an array of integers
  * @a: Array of integers
  * @n: Number of elements to print
  *
  * Return: Nothing.
  */
void prinit_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
