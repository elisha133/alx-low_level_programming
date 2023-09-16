#include <stdio.h>

/**
  * main - Entry point
  * Description: Print numbers from 1 to 100,
  * replace multiple of 3 with Fizz,
  * multiple of 5 with Buzz,
  * and multiple of 3 and 5 with FizzBuzz.
  *
  * Return: Always 0 (Success).
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");

	}

	printf("\n");
	return (0);
}
