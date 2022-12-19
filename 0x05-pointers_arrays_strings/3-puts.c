#include "main.h"

/**
 * _puts  - prints a string followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */

void  _puts(char *s)
{
	int i;


	for (i = 0; i < _strlen(s); i++)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');

}
