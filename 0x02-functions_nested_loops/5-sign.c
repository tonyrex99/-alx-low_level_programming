#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign of a number (+, 0, or -)
 *
 * @n: The number to print the sign of
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
