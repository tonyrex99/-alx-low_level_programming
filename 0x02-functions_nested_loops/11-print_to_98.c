#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line
 * @n: The starting number to print
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
