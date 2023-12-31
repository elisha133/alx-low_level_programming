#include <stdio.h>

/**
  * main - Entry point
  * Description: Find the largest prime factor of the
  * number 612852475143.
  *
  * Return: Always 0 (Success).
  */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime = prime / 2;
			continue;
		}

		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime = prime / div;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
