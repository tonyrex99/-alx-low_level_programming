#include "main.h"

/**
 * _puts  - prints a string followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
