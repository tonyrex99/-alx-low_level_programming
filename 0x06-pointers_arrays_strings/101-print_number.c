#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	int divisor = 1000000000;
	int is_negative = 0;

	if (n < 0)
	{
		_putchar('-');
		is_negative = 1;
		n = -n;
	}

	while (divisor > 0)
	{
		int digit = (n / divisor) % 10;

		if (digit > 0 || divisor == 1 || (divisor / 10) % 10 > 0)
		{
			_putchar(digit + '0');
		}
		divisor /= 10;
	}
}
