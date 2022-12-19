#include "main.h"
/**
 * puts_half - Print half of a string, followed by a newline
 * @str: pointer to the string to print
 */
void puts_half(char *str)
{
	int n, len, mid;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		mid = len / 2;
		for (n = mid; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (len - 1) / 2;
		for (n = mid + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
