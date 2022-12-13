#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *        in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: always 0
 */
int main(void)
{
	long long a = 1, b = 2, c, sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}

		c = a + b;
		a = b;
		b = c;
	}

	printf("%lld\n", sum);

	return (0);
}
