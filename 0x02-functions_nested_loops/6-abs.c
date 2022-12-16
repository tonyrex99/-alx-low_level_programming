/**
 * _abs - Compute the absolute value of an integer
 *
 * @n: The number to compute the absolute value of
 *
 * Return: The absolute value of n
 */
#include "main.h"

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
