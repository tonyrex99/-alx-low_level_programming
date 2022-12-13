#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int a = 1, b = 2, c;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
