#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed
 * by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	int sum = 0;
	int i = 0;

	/* Loop until we reach 1024 */
	while (i < 1024)
	{
		/* Check if the current number is a multiple of 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* If so, add it to the sum */
			sum += i;
		}

		/* Increment the counter */
		++i;
	}

	/* Print the result followed by a new line */
	printf("%d\n", sum);

	return (0);
}
