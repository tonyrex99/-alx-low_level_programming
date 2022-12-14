#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: The number to print the last digit of
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	int last_digit
	
	if (n >= 0)

	{
		last_digit= n % 10;
	}
	
	else (last_digit < 0)
	{
		last_digit = (n % 10) * -1;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}

