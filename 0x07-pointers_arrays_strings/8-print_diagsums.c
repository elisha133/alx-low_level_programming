#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - Print the sum of the two diagonals
  * @a: The square matrix
  * @size: The size of the square
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int i;
	int str1 = 0;
	int str2 = 0;

	for (i = 0; i < size; i++)
	{
		str1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		str2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", str1, str2);
}
