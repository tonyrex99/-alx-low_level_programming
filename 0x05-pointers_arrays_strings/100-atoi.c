#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 *
 * Return: integers extracted.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s)
	{
		if (*s == '-')
		sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
				num = num * 10 + (*s++ - '0');
			return (num * sign);
		}
		s++;
	}
	return (0);
}
