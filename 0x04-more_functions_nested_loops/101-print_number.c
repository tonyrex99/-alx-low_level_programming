#include "main.h"

/**
 * print_number - print out a number using printchar.
 * @n: the number you want to print using putchar
 * Return: 0.
 */
void print_number(int n)
{
	int  temp, temp2, count, division, result, i;

	count = 0;
	div = 1;
	if (n < 0)
	{
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		temp = n;
		while (temp)
		{
			temp /= 10;
			++count;
		}
		temp2 = count;
		while (temp2 > 1)
		{
			division *= 10;
			--temp2;
		}
		for (i = 0; i < count; ++i)
		{
			result = n / div;
			if (result < 0)
				result *= -1;
			_putchar(result + '0');
			n %= division;
			division /= 10;
		}
	}
}
