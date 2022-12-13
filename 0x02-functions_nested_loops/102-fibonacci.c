#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long long a = 1, b = 2, c;

	printf("%lld, %lld, ", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%lld, ", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
