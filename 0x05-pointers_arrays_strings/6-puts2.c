#include "main.h"
/**
 * puts2 - prints very other character in string.
 * @str: pointer to string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;
	int printed;
	printed - 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
		printed++;
	}
	_putchar('\n');
	return (printed);
	
}
