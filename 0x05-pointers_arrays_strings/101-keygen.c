#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * main - Entry point
  * Description: Generate random valid passwords for the program
  * 101-crackme
  *
  * Return: Alway 0 (Success).
  */
int main(void)
{
	char a[100];
	int r, n, i;

	n = 0;
	i = 0;
	srand(time(NULL));
	while (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			a[i++] = r;
			n += r;
		}
	}
	a[i++] = (2772 - n);
	a[i] = '\0';
	printf("%s", a);

	return (0);
}
