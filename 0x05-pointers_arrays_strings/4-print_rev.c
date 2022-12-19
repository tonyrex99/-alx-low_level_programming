#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: pointer to string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}

	length--;
	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
